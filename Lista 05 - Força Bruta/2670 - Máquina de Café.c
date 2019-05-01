#include <stdio.h>

int calcula(int andar3, int andar2, int andar1) {
	int tempoAndar3, tempoAndar2, tempoAndar1;

	tempoAndar3 = (andar2 + (andar1 * 2)) * 2;
	tempoAndar2 = (andar3 + andar1) * 2;
	tempoAndar1 = ((andar3 * 2) + andar2) * 2;

	if (tempoAndar3 < tempoAndar2 && tempoAndar3 < tempoAndar1) return tempoAndar3;
	if (tempoAndar2 < tempoAndar1) return tempoAndar2;
	else return tempoAndar1;
}

int main(int argc, char ** argv) {
	int andar1, andar2, andar3, maisRapido;

	scanf("%d", &andar3);
	scanf("%d", &andar2);
	scanf("%d", &andar1);

	maisRapido = calcula(andar3, andar2, andar1);

	printf("%d\n", maisRapido);

	return 0;
}