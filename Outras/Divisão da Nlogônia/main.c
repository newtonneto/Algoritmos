#include <stdio.h>

int main(int argc, char **argv) {
	int k = -1;
	int n;
	int m;
	int x;
	int y;
	int i;

	do {
		scanf("%d", &k);
		if (k > 0) {
			scanf("%d %d", &n, &m);
			
			for (i = 0; i < k; i++) {
				scanf("%d %d", &x, &y);

				if (x == n || y == m) {
					printf("divisa\n");
				}

				else if (x > n && y > m) {
					printf("NE\n");
				}

				else if (x < n && y > m) {
					printf("NO\n");
				}

				else if (x > n && y < m) {
					printf("SE\n");
				}

				else {
					printf("SO\n");
				}
			}
		}
	} while (k != 0);

	return 0;
}