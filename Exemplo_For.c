/*Dado um número inteiro n >= 0, calcular o fatorial de n (n!). 
	n! = n * (n-1) * (n-2)*...* 2 * 1 */
#include <stdio.h>

int main(){
	int n, i, fat = 1;
	printf("\nDigite n: ");
	scanf("%d", &n);
	for (i = n; i >0; i--)
		fat = fat * i;
	printf("Fatorial de %d: %d.", n, fat);
	return 0;
}	

