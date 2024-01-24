/*calcular somatória de uma sequência de números inteiros diferentes de zero, terminada por zero*/
#include <stdio.h>

int main(){
	int num, soma;
	printf("Digite uma sequencia terminada por zero: \n");
	scanf("%d", &num);
	while (num!=0){
		soma = soma + num;
		scanf ("%d", &num);
	}
	printf("Soma da sequencia: %d\n", soma);
	return 0;
}
