#include <stdio.h>

int main(int argc, char **argv) {
	int l;
	int c;
	int typeOne;
	int typeTwo;

	scanf("%d", &l);
	scanf("%d", &c);

	typeOne = l * c;
	typeOne = typeOne + ((l - 1) * (c - 1));
	typeTwo = ((l - 1) * 2) + ((c - 1) * 2);

	printf("%d\n", typeOne);
	printf("%d\n", typeTwo);

	return 0;
}