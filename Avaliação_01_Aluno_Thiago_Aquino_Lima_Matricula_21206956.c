/*
Lucas Marques Bandechi		Matricula: 22106697
Thiago Aquino Lima 			Matr�cula: 21206956
*/

#include <stdio.h>

int main (void){
	int ddd;
	printf("\nDigite o DDD: ");
	scanf("%d", &ddd);
	switch(ddd){
		case 11: printf("\nO DDD pertence a cidade de Sao Paulo "); break;
		case 19: printf("\nO DDD pertence a cidade de Campinas "); break;
		case 21: printf("\nO DDD pertence a cidade do Rio de Janeiro "); break;
		case 27: printf("\nO DDD pertence a cidade de Vitoria "); break;
		case 31: printf("\nO DDD pertence a cidade de Belo horizonte "); break;
		case 32: printf("\nO DDD pertence a cidade de Juiz de Fora "); break;
		case 61: printf("\nO DDD pertence a cidade de Brasilia "); break;
		case 67: printf("\nO DDD pertence a cidade de Salvador "); break;
		default: printf("\nDDD nao cadastrado "); break;
	}
	return 0;
}
