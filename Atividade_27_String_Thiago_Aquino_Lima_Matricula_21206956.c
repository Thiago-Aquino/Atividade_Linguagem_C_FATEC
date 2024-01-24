#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	int i, tam;
	printf("\nDigite uma frase: ");
	gets(s);
	tam = strlen(s);
	printf("\nFrase invertida: ");
	for(i=tam-1; i>=0; i--)
		printf("%c", s[i]);
	return 0;
}
