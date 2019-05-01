#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) {
	int n;
	int a;
	int b;

	scanf("%d", &n);

	while (n > 0) {
		scanf("%d %d", &a, &b);

		if (a < b) {
			printf("nao encaixa\n");
		}
		else {
			if (a == b) {
				printf("encaixa\n");
			}
			else {
				while (a >= b) {

				}
			}
		}

		n = n - 1;
	}*/

	return 0;
}