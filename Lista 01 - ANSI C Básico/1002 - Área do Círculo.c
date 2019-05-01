/*Caso apresente erro na compilação utilizar o "-lm" no final.*/
/*Ex: gcc -Wall -ansi -o programa programa.c -lm*/

#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {
	double raio, area, n = 3.14159;

	scanf("%lf", &raio);

	raio = pow(raio, 2);
	area = n * raio;
	
	printf("A=%.4lf\n", area);

	return 0;
}
