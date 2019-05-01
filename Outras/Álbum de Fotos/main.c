#include <stdio.h>

int main(int argc, char **argv) {
	int x, y, l1, h1, l2, h2, p1, p2, p3;

	scanf("%d %d", &x, &y);
	scanf("%d %d", &l1, &h1);
	scanf("%d %d", &l2, &h2);

	/*if (h1 <= y && l2 <= y && l1 <= x && h2 <= x && (l1 + h2) <= x) {
		printf("S\n");
	}
	else if (h1 <= x && l2 <= x && l1 <= y && h2 <= y && (h1 + l2) <= x) {
		printf("S\n");
	}
	else if ((l1 + l2) <= x & h1 <= y && h2 <= y) {
		printf("S\n");
	}
	else if ((h1 + h2) <= x && l1 <= y && l2 <= y) {
		printf("S\n");	
	}
	else if ((l1 + l2) <= y && h1 <= x && h2 <= x) {
		printf("S\n");
	}
	else if () {

	}
	else {
		printf("N\n");
	}*/

	p3 = x * y;
	p1 = l1 * h1;
	p2 = l2 * h2;

	if ((p1 + p2) <= p3) {
		printf("S\n");
	}
	else {
		printf("N\n");
	}

	return 0;
}