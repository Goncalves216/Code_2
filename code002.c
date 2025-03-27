#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float valor, i;

    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%f", &valor);

    printf("\nTabuada de multiplicacao do %f:\n", valor);
    for (i = 1; i <= 10; i++) {
        printf("%f * %f = %f\n", valor, i, valor * i);
    }
    printf("\nTabuada de divisao do %f:\n", valor);
    for (i = 1; i <= 10; i++) {
        printf("%f / %f = %f\n", valor, i, valor / i);
    }
	return 0;
}