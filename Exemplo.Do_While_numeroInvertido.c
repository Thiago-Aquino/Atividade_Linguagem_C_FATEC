/*Dado um número natural (maior ou igual a zero), exibir seus dígitos invertidos*/
#include <stdio.h>

int main(){
	int numero;
	do{
		printf("\nDigite um n\243mero maior zero:");
		scanf("%d", &numero);
	}while(numero < 0);
	do{
		printf("%d" ,numero%10);
		numero = numero/10;
	}while(numero != 0);
	return 0;
}
