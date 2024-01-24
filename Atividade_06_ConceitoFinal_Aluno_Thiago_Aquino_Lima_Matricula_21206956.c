/* Quantidade de faltas e nota média do aluno, informando conceito final */

#include <stdio.h>
#include <math.h>

int main(void){
	int faltas;
	float media;
	printf("\nDigite a quantidade de faltas: ");
	scanf("%d", &faltas);
	printf("\nDigite a m\202dia: ");
	scanf("%f", &media);
	if ( faltas > 5.0) puts ("\nConceito F");
	else {
		if ( media < 6.0 ) puts ("\nConceito C");
		else{
			if (media <= 7.5) puts ("\nConceito B");
			else{
				if (media <= 9.0 ) puts ("\nConceito A");
				else puts ("\nConceito E");
			}
		}
	}
	return 0;
}
