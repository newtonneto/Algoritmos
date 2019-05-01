#include <stdio.h>

int main(int argc, char ** argv) {
	int valor, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

	scanf("%d", &valor);

	printf("%d\n", valor);

	n100 = valor / 100;
	valor = valor - (n100 * 100);
	n50 = valor / 50;
	valor = valor - (n50 * 50);
	n20 = valor / 20;
	valor = valor - (n20 * 20);
	n10 = valor / 10;
	valor = valor - (n10 * 10);
	n5 = valor / 5;
	valor = valor - (n5 * 5);
	n2 = valor / 2;
	valor = valor - (n2 * 2);

	printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, valor);

	return 0;
}
