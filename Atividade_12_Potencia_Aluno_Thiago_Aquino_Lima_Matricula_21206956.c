/*Dado N >= 0 inteiro e X real, calcular X elevado a potência N )*/

#include <stdio.h>

int main(){
	int numero, expoente, i;
	printf("\nDigite um n\243mero inteiro real: ");
	scanf("%d", &numero);
	printf("\nDigite a pot\210ncia no qual o n\243mero ser\240 elevado: ");
	scanf("%d", &expoente);
	for (i = 1; i < expoente; i++){
		numero = numero * numero;
		}
	if (expoente == 0){
		numero = 1;
	}
	printf("\nResultado da pot\210ncia: %d", numero);	
	return 0;
	
}
