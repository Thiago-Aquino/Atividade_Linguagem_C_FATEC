#include <stdio.h>
#include "macros2.h"

int main(){
	char c;
	printf("\n Digite um caracter: ");
	scanf("%c", &c);
	printf("\n Caracter em minusculo: %c", minuscula(c));
	printf("\n Caracter em maiusculo: %c", maiuscula(c));
	return 0;
}
