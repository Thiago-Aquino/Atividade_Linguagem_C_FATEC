#include <stdio.h>

int main(){
	char frase[100];
	int q=0, i=0;
	printf("\nDigite uma frase: ");
	gets(frase);
	while (frase[i]!='\0'){
		if (frase[i]!=' ') i++;
		else{
			q++;
			while (frase[i] == ' ') i++;
		}
	}
	q++;
	if(q>1)
	printf("\nVoce digitou %d palavras.", q);
	else
	printf("\nVoce digitou %d palavra.", q);
	return 0;
}
