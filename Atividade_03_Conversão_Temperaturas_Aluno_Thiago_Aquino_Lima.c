#include <stdio.h>
#include <math.h>

int main(void){
	float fahrenheit, celsius;
	printf("\nDigite a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
	printf("\nCelsius: %.2f", celsius );
	
	return 0;
}

