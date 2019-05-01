/*Usar "-lm" para compilar caso apresente erro*/
/*Ex: gcc -Wall -ansi -o programa programa.c -lm*/

#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {
	double raio, volume;

	scanf("%lf", &raio);

	volume = (4/3.0) * 3.14159 * pow(raio, 3);

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}
