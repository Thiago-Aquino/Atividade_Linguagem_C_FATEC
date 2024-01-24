/* Calcular area e circunferencia do circulo */
#include <stdio.h>
#include <math.h>

int main(void){
	float PI, area, perimetro, raio; 
	PI = 3.1415;
	printf ("\nDigite o raio do c\641rculo: ");
	scanf("%f", &raio);
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;
	printf("\n\665rea: %.2f", area);
	printf("\nPer\641metro: %.2f", perimetro);
	
	return 0;
}


