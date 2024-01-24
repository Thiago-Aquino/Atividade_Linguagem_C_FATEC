/*
	Dado o seguinte programa, codifique as rotinas 
  obtem() -> obtem as temperaturas de cada dia da semana
  media() -> calcula a média da temperatura da semana
  conta() -> quantos dias estao acima da média

*/

#include <stdio.h>
#define max 7

void obtem(float tmp[],int m){
	int i;
	printf("Informe as temperaturas: ");
	for(i=0; i<m; i++){
		printf("\n%d:", i+1);
		scanf("%f", &tmp[i]);	
	}
}
media(float tmp[],int m){
	float soma=0;
	int i;
	for(i=0; i<m; i++){
		soma = tmp[i] + soma;	
	}
	
	return soma/m;
}

int conta(float tmp[], int m, float med){
	int i, c=0; 
	for(i=0; i<m; i++)
		if( tmp[i]>med )
			c++;
	return c;
}

int main(){
	float temp[max],m;
	obtem(temp, max);
	m = media(temp, max);
	printf("Estatistica: %d", conta(temp, max, m));
	return 0;
}
