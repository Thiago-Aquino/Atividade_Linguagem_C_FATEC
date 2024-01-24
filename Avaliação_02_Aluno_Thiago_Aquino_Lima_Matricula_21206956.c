/*
Lucas Marques Bandechi		Matricula: 22106697
Thiago Aquino Lima 			Matrícula: 21206956
*/

#include <stdio.h>

void quadradente(double x, double y){
	if(x == 0.0 && y == 0.0){
		printf("\nOrigem");
	}
	else if(x==0.0 && y!=0.0){
		printf("\nEixo Y");
	}
	else if(x!=0.0 && y==0.0){
		printf("\nEixo X");
	}
	else if(x > 0.0 && y > 0.0){
		printf("\nQ1");
	}
	else if(x < 0.0 && y > 0.0){
		printf("\nQ2");
	}
	else if(x < 0.0 && y < 0.0){
		printf("\nQ3");
	}
	else if(x > 0.0 && y < 0.0){
		printf("\nQ4");
	}
}

int main(){
	double a, b;
	printf("\nDigite o valor de X: ");
	scanf("%lf", &a);
	printf("\nDigite o valor de Y: ");
	scanf("%lf", &b);
	quadradente(a, b);
	return 0;
}
