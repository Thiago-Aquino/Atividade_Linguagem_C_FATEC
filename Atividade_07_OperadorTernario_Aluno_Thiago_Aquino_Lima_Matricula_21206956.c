/* Programa que informa se um n�mero � par ou �mpar apartir de um operador codicional tern�rio */

#include <stdio.h>

int main(void){
	int numero, resultado;
	printf("\nDigite o n\243mero inteiro: ");
	scanf("%d", &numero);
	numero % 2 == 0 ? printf ("\nO n\243mero %d \202 par", numero):printf ("\nO n\243mero %d \202 \641mpar", numero);

	return 0;
}
