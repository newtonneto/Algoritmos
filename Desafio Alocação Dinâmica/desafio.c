#include <stdio.h>
#include <stdlib.h>

double calculaMedia (int indice, int *aponta) {
	double media = 0;
	int i;

	for (i = 0; i < indice; i++) {
		media = media + aponta[i];
	}

	return media / indice;
}

int quantidadeDeElementosAcimaDaMedia (int indice, int *aponta, double media) {
	int acimaDaMedia = 0;
	int i;

	for (i = 0; i < indice; i++) {
		if (aponta[i] > media) {
			acimaDaMedia++;
		}
	}

	return acimaDaMedia;
}

int main (int argc, char ** argv) {
	int controle = 1;
	int tamanho = 5;
	int indice = 0;
	int entrada;
	int *aponta;
	int i;
	double media;
	int acimaDaMedia;

	aponta = (int*) malloc(sizeof(int) * tamanho);
	if (aponta == NULL) {
		printf("Erro");
			exit(1);
	}

	while (controle == 1) {
		scanf("%d", &entrada);

		/*Se o valor lido for "-1" a variavel "controle" terá seu valor alterado para 0, saindo do while*/
		if (entrada == -1) {
			controle = 0;
		}
		else {
			if (indice == tamanho) {
				int armazenaElementos[tamanho];

				/*Armazena em um vetor temporario os elementos salvos na memoria*/
				for (i = 0; i < tamanho; i++) {
					armazenaElementos[i] = aponta[i];
				}

				/*Dobra o tamanho do espaço reservado na memoria*/
				tamanho = tamanho * 2;

				/*Libera o espaço reservado anteriormente*/
				free(aponta);

				/*Faz um cast com o tamanho dobrado*/
				aponta = (int*) malloc(sizeof(int) * tamanho);

				/*Transfere o backup de elementos para o novo espaço reservado*/
				for (i = 0; i < tamanho; i++) {
					aponta[i] = armazenaElementos[i];
				}				

			}
			
			/*Armazena o valor lido em um espaço da memoria reservada*/
			aponta[indice] = entrada;
			indice++;
		}
	}

	/*Exibe os valores armazenados*/
	for (i = 0; i < indice; i++) {
		printf("%u ", *(aponta + i));
	}
	printf("\n");

	/*Calcula a média dos elementos*/
	media = calculaMedia(indice, aponta);
	acimaDaMedia = quantidadeDeElementosAcimaDaMedia(indice, aponta, media);

	printf("Media: %lf\n", media);
	printf("Quantidade de numeros acima da media: %d\n", acimaDaMedia);

	/*Libera o espaço reservado*/
	free(aponta);

	return 0;
}