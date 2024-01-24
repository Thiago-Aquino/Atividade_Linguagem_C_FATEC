/*Descubra se um número primo*/
#include <stdio.h>

int main(){
	int numero, antecessor;
	printf("\nDigite um numero natural: ");
	scanf("%u", &numero);
	for(antecessor = 2; antecessor < numero; antecessor++ )
		if (numero%antecessor == 0) break;
		
	if (antecessor == numero)
		printf("\nPrimo");
	else
		printf("\nNao primo");
	return 0;
}
