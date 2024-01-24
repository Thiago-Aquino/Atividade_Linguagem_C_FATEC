/*Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto*/
#include <stdio.h>

int main(){
	int numero, i, resultado = 1, impar = 1;
	printf("\nDigite um n\243mero para obter seu quadrado: ");
	scanf("%d", &numero);
	for (i = 1; i < numero; i++){
		impar = impar + 2;
		resultado = resultado + impar;
	}
	printf("\nO n\243mero %d ao quadrado \202 %d ", numero, resultado);
	return 0;
}
