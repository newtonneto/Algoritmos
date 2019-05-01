#include <stdio.h>

int main(int argc, char ** argv) {
	int hora = 0, minuto = 0, tempoTotal;

	scanf("%d", &tempoTotal);

	while (tempoTotal >= 3600) {
		tempoTotal = tempoTotal - 3600;
		hora = hora + 1;
	}

	while (tempoTotal >= 60) {
		tempoTotal = tempoTotal - 60;
		minuto = minuto + 1;
	}

	printf("%d:%d:%d\n", hora, minuto, tempoTotal);

	return 0;
}
