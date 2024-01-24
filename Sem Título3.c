/* Placa do carro informa dia da semana do Rodizio*/

#include <stdio.h>

int main(void){
	int placa;
	printf("\nDigite o ltimo dgito da placa do carro: ");
	scanf("%d", &placa);
	if(placa < 0 || placa > 9){
	printf ("\nDgito invlido, Digite novamente um nmero entre 0 e 9 ");
	}	
	else{
		switch (placa){
			case 1: 
			case 2: printf("\nO rod\641zio est\240 agendado para segunda-feira"); break;
			case 3:
			case 4: printf("\nO rod\641zio est\240 agendado para terc\207-feira"); break;
			case 5:
			case 6: printf("\nO rod\641zio est\240 agendado para quarta-feira"); break;
			case 7:
			case 8: printf("\nO rod\641zio est\240 agendado para quinta-feira"); break;
			default: printf("\nO rod\641zio est\240 agendado para sexta-feira"); break;
		}
	}		
	return 0;
}
