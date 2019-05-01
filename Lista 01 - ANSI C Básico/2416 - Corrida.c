#include <stdio.h>

int main(int argc, char ** argv) {
	int c, n;

	scanf("%d %d", &c, &n);

	printf("%d\n", c % n);

	return 0;
}
