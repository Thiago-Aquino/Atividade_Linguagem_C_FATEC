/*Do while*/
#include <stdio.h>

int main(){
	int num, soma;
	printf("Digite uma sequencia terminada por zero: \n");
	do{
		scanf ("%d", &num);
		soma = soma + num;
	}while (num!=0);
	printf("Soma da sequencia: %d\n", soma);
	return 0;
}
