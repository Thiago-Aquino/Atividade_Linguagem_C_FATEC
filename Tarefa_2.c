#include <stdio.h>
#include <string.h>

int main(){
	char str1[200];
	char str2[200];
	char str3[200];
	int pos;
	
	printf("\nDigite alguma palavra: ");
	gets(str1);
	
	printf("Digite a posicao do caractere que sera removido: ");
	scanf("%d", &pos);
	
	strncpy(str2, str1, pos-1);
	
	printf("Primeira parte da palavra = %s \n", str2);
	
	strrev(str1);
	printf("Palavra invertida = %s \n", str1);
	
	int tamanho = strlen(str1);
	int tamanho2 = strlen(str2);
	int tamanho3 = strlen(str1) - strlen(str2);
	
	strncpy(str3, str1, tamanho3);
	printf("Segunda parte da palavra invertida antes de concatenar = %s \n", str3);
	strrev(str3);
	
	strcat(str2,str3);
	
	printf("Segunda parte da palavra pra concatenar = %s \n", str3);
	
	printf("Palavra final = %s \n", str2);
	
	return 0;
}
