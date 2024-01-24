
#include <stdio.h>

int main(void){
	int numero, resultado;
	printf("\nDigite o n\243mero inteiro: ");
	scanf("%d", &numero);
	resultado = numero % 2 == 0 ? 2:1;
	if (resultado == 2){
		printf ("\nO n\243mero %d \202 par", numero);
	}
	else{
		printf ("\nO n\243mero %d \202 \641mpar", numero);
	}

	return 0;
}
