#include <stdio.h>

int main (int argc, char ** argv) {
	int linhas, colunas, indiceLinha, indiceColuna, achouLinha = 0, achouColuna = 0;

	scanf("%d %d", &linhas, &colunas);

	int matriz[linhas][colunas];

	for (indiceLinha = 0; indiceLinha < linhas; indiceLinha++) {
		for (indiceColuna = 0; indiceColuna < colunas; indiceColuna++) {
			scanf("%d", &matriz[indiceLinha][indiceColuna]);
		}
	}

	/*Exibição para teste
	for (indiceLinha = 0; indiceLinha < linhas; indiceLinha++) {
		for (indiceColuna = 0; indiceColuna < colunas; indiceColuna++) {
			printf("%d ", matriz[indiceLinha][indiceColuna]);
		}
		printf("\n");
	}*/

	for (indiceLinha = 1; indiceLinha < linhas - 1; indiceLinha++) {
		for (indiceColuna = 1; indiceColuna < colunas - 1; indiceColuna++) {
			if (matriz[indiceLinha][indiceColuna] == 42) {
				if (matriz[indiceLinha - 1][indiceColuna - 1] == 7 && matriz[indiceLinha - 1][indiceColuna] == 7 && matriz[indiceLinha - 1][indiceColuna + 1] == 7 && matriz[indiceLinha][indiceColuna - 1] == 7 && matriz[indiceLinha][indiceColuna + 1] == 7 && matriz[indiceLinha + 1][indiceColuna - 1] == 7 && matriz[indiceLinha + 1][indiceColuna] == 7 && matriz[indiceLinha + 1][indiceColuna + 1] == 7) {
					achouLinha = indiceLinha + 1;
					achouColuna = indiceColuna + 1;
					break;
				}
			}
		}
	}

	printf("%d %d\n", achouLinha, achouColuna);

	return 0;
}

/*Comparações
matriz[indiceLinha - 1][indiceColuna - 1] == 7
matriz[indiceLinha - 1][indiceColuna] == 7
matriz[indiceLinha - 1][indiceColuna + 1] == 7

matriz[indiceLinha][indiceColuna - 1] == 7
matriz[indiceLinha][indiceColuna + 1] == 7

matriz[indiceLinha + 1][indiceColuna - 1] == 7
matriz[indiceLinha + 1][indiceColuna] == 7
matriz[indiceLinha + 1][indiceColuna + 1] == 7
*/