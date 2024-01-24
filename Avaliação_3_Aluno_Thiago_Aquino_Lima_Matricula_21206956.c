/*
Lucas Marques Bandechi		Matricula: 22106697
Thiago Aquino Lima 			Matrícula: 2120695
*/

#include <stdio.h>

int main(){
	int golsinter=0, golsgremio=0, grenais=0, inter=0, gremio=0, empates=0, novogrenal=0;
	do{
		printf("\nGrenal");
		grenais++;
		printf("\nDigite o numero de gols do Inter: ");
		scanf("%d", &golsinter);
		printf("Digite o numero de gols do Gremio: ");
		scanf("%d", &golsgremio);
		if(golsinter > golsgremio){
			inter++;
		}
		else if(golsinter < golsgremio){
			gremio++;
		} 
		else{
			empates++;
		}
		printf("\nNovo grenal (1-sim 2-nao)");
		scanf("%d", &novogrenal);
	}while(novogrenal==1);
	
	printf("\nO numero de grenais desse confronto: %d", &grenais);
	printf("\nNumero de vitorias do Inter: %d", &inter);
	printf("\nNumero de vitorias do Gremio: %d", &gremio);
	printf("\nNumero de empates: %d", &empates);
	if(inter > gremio){
		printf("\nO Inter venceu o maior numero de grenais");
	}
	else if(inter < gremio){
		printf("\nO Gremio venceu o maior numero de grenais");
	}
	else{
		printf("\nNao houve vencedor nesta");
	}
	
	return 0;
}
