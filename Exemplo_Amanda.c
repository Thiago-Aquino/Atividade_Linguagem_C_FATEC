//* Programa IMC *//

#include <stdio.h>

int main(void){
	float altura, peso, IMC; 
	printf("\nDigite a sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite o seu peso: ");
	scanf("%f", &peso);
	IMC = peso / pow(altura,2);
	printf("\nSeu IMC \202 %.2f ", IMC);
	
	return 0;
}
