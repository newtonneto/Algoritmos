#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	long int x;
	long int y;
	int i;
	int binX[64];
	int binY[64];
	int contaDif;
	int controle = -1;

	while (controle != 0) {
		scanf("%ld %ld", &x, &y);
		controle = x + y;
		contaDif = 0;

		if (controle > 0) {
			for (i = 63; i >= 0; i--) {
				if (x % 2 == 1) {
					binX[i] = 1;
					x = x / 2;
				}
				else {
					binX[i] = 0;
					x = x / 2;
				}

				if (y % 2 == 1) {
					binY[i] = 1;
					y = y / 2;
				}
				else {
					binY[i] = 0;
					y = y / 2;
				}
			}

			for (i = 63; i >= 0; i--) {
				if (binX[i] != binY[i]) {
					contaDif = contaDif + 1;
				}
			}

			printf("%d\n", contaDif);
		}
	}

	return 0;
}