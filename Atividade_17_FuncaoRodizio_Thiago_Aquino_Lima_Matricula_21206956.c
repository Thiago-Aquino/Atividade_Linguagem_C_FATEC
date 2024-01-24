/*Codifique a fun��o rodizio(placa), que recebe um n�mero ente 0 e 9 que
representa o �ltimo d�gito da placa de um ve�culo e exibe o dia em ele est� no rod�zio.*/

#include <stdio.h>

void rodizio (int placa){
	switch (placa){
			case 1: 
			case 2: printf("\nO rod\641zio est\240 agendado para segunda-feira"); break;
			case 3:
			case 4: printf("\nO rod\641zio est\240 agendado para ter\207a-feira"); break;
			case 5:		
			case 6: printf("\nO rod\641zio est\240 agendado para quarta-feira"); break;
			case 7:
			case 8: printf("\nO rod\641zio est\240 agendado para quinta-feira"); break;
			default: printf("\nO rod\641zio est\240 agendado para sexta-feira"); break;
	return placa;
	}
}

int main(){
	int placa;
	printf("\nDigite o \243ltimo d\641gito da placa do carro: ");
	scanf("%d", &placa);
	if(placa < 0 || placa > 9){
		printf ("D\641gito inv\240lido, Digite novamente um n\243mero entre 0 e 9 ");
	}
	else{
		rodizio(placa);
	}				
	return 0;
}
