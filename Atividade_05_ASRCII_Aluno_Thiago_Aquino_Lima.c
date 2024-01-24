/* Caracter ASRCII */

#include <stdio.h>

int main(){
	char caracter;
	printf("\nDigite o caracter: ");
	scanf("%c", &caracter);
	printf("\nOctal: %o \nDecimal: %d \nHexadecimal: %x",  caracter, caracter, caracter);
	
	return 0;
}
