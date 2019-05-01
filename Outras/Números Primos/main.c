#include <stdio.h>

int main (int argc, char **argv) {
	int casos;
	int numero;
	int limite;
	int i;
	int controle = 1;

	scanf("%d", &casos);

	while (casos > 0) {
		scanf("%d", &numero);
		
		if (numero == 2) {
			printf("%d eh primo\n", numero);
		}
		else if (numero > 2) {
			limite = (numero / 2) + 1;
			/*limite = numero;*/
			for (i = 2; i <= limite; i++) {
				if (numero % i == 0) {
					controle = 0;
					i = limite;
					printf("%d nao eh primo\n", numero);
				}
			}
			
			if (controle == 1) {
				printf("%d eh primo\n", numero);
			}
			controle = 1;
		}
		else {
			printf("%d nao eh primo\n", numero);
		}
		casos--;
	}

	return 0;
}
