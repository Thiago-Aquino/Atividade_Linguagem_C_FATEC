/*Codifique a função fat(n), que devolve o fatorial de um inteiro n. Lembrando que:
  n! = n * (n-1) * (n-2) * ... * 2 * 1        0! = 1 (por definição)
  recebe parâmetro: n                         tipo devolvido: inteiro*/
  
#include <stdio.h>

int fatorial(int numero){
	int i, fat = 1;
	for(i = numero; i > 0; i--)
		fat = fat * i;
	return fat;
}

int main(){
	int numero;
	printf("\nDigite um n\243mero para obter seu fatorial: ");
	scanf("%d", &numero);
	printf("\nO fatorial de %d \202 %d", numero, fatorial(numero));
	return 0;
}
