#include <stdio.h>
#include <math.h>

typedef struct{
	float x;
	float y;
}PONTO;

float distancia(PONTO P, PONTO Q){
	return(sqrt(pow(P.x-Q.x,2)+pow(P.y-Q.y,2)));
}
	
int main() {
	PONTO a, b;
    printf("Informe as coordenadas para o primeiro ponto: ");
    scanf("%f %f", &a.x, &a.y);
    printf("Informe as coordenadas para o segundo ponto: ");
    scanf("%f %f", &b.x, &b.y);
    printf("Distancia: %f", distancia(a, b));
    return 0;
}
