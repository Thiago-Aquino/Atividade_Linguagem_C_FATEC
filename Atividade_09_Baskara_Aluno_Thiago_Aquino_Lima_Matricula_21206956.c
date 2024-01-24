/*Apartir dos coeficientes de uma equação de 2º Grau( 'a' diferente de 0, 'b' e 'c'), mostrar as raízes reais*/

# include <stdio.h>
# include <math.h>

int main (void){
	float a, b, c, delta, x1, x2;
	printf ("\nDigite o coeficiente 'a' da equa\207\706o de 2 grau: ");
	scanf ("%f", &a);
	while(a==0){
		printf("\nO valor do coeficiente 'a' dever\240 ser diferente de zero \nDigite novemente o coeficiente 'a': ");
		scanf ("%f", &a);	
	}
	printf ("\nDigite o coeficiente 'b' da equa\207\706o de 2 grau: ");
	scanf ("%f", &b);
	printf ("\nDigite o coeficiente 'c' da equa\207\706o de 2 grau: ");
	scanf ("%f", &c);
	delta = (pow(b,2)) -( 4 * a * c);
	if(delta < 0){
		printf("\nN\706o existe ra\641zes reais");
	}
	else{
		x1 = - b + sqrt(delta) / ( 2 * a );
		printf("\nX1: %.2f", x1);
		x2 = - b - sqrt(delta) / ( 2 * a );
		printf("\nX2: %.2f", x2);
	}
	return 0;
}
