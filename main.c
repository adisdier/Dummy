#include "stdio.h"
#include "stdlib.h"

int ajoute(int a, int b) {
	return a + b;
}

int main () {
	printf("La somme de 2 et 4 est %d\n", ajoute(2, 4));

	return 0;
}
