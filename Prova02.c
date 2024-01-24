 /* Escreva uma função que receba 2 valores reais (x e y), que representam as coordenadas de um 
ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre 
um dos eixos cartesianos ou na origem (x = y = 0).
Se o ponto estiver na origem, escreva a mensagem “Origem”.
Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
Elabore um programa para testar sua função */

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
