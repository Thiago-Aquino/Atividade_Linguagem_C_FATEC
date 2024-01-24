/*Apartir de uma sequência de números inteiros diferentes de zero, 
terminada por um zero, imprima o quadrado de cada número da sequência*/
#include <stdio.h>
#include <math.h>

int main(){
	int numero, quadrado, i;
	printf("\nDigite uma sequ\210cia n\243merica para obter seu quadrado, que se encerrar\240 ap\242s digitar zero");
	printf("\nDigite o primeiro n\243mero: ");	
	scanf("%d", &numero);
	while(numero !=0){
		quadrado = numero * numero;
		printf("\nO n\243mero %d ao quadrado \202 %d\n", numero, quadrado);
		printf("\nDigite o pr\242ximo n\243mero: ");	
		scanf("%d", &numero);
	}
	return 0;
}
