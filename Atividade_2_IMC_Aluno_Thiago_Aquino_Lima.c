/* Programa para medir IMC(Índice de massa corpórea) */
#include <stdio.h>
#include <math.h>

int main(void){
	float imc, peso, altura;
	printf("\nDigite o seu peso: ");
	scanf("%f", &peso);
	printf("\nDigite a sua altura: ");
	scanf("%f", &altura);
	imc = peso/pow(altura,2); // pow (base da potencia, expoente)
	printf("\nIMC: %.2f", imc);
	return 0;
}
