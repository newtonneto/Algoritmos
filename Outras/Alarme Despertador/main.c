#include <stdio.h>

int main (int argc, char **argv) {
	int hora1;
	int minuto1;
	int hora2;
	int minuto2;
	int totalMinutosDeSono;

	do {
		scanf("%d %d %d %d", &hora1, &minuto1, &hora2, &minuto2);

		totalMinutosDeSono = (hora2 * 60) + minuto2;

		if (hora1 < hora2) {
			if (minuto1 > minuto2) {
				totalMinutosDeSono = (hora2 - hora1) * 60;
				totalMinutosDeSono = totalMinutosDeSono - minuto1;
			}
			else if (minuto1 < minuto2) {
				totalMinutosDeSono = (hora2 - hora1) * 60;
				totalMinutosDeSono = totalMinutosDeSono + minuto2;
			}
			else {
				totalMinutosDeSono = (hora2 - hora1) * 60;
			}
		}
		else if (hora1 > hora2) {
			totalMinutosDeSono = (hora2 * 60) + minuto2;
			totalMinutosDeSono = totalMinutosDeSono + ((23 - hora1) * 60);
			totalMinutosDeSono = totalMinutosDeSono + (60 - minuto1);
		}
		else {
			if (minuto1 > minuto2) {
				totalMinutosDeSono = ((23 - hora1) * 60) - minuto1;
				totalMinutosDeSono = totalMinutosDeSono + ((hora2 * 60) + minuto2);
			}
			else if (minuto1 < minuto2) {
				totalMinutosDeSono = minuto2 - minuto1;
			}
			else {
				totalMinutosDeSono = 0;
			}
		}

		printf("%d\n", totalMinutosDeSono);
	} while (hora1 != 0 || minuto1 != 0 || hora2 != 0 || minuto2 != 0);

	return 0;
}
