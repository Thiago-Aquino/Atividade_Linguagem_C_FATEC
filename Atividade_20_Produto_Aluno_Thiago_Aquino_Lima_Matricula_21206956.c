/*Codifique uma função recursiva que calcule o produto de dois naturais usando soma.
Quais as soluções triviais?
Qual a solução geral?
O problema está diminuindo? */

#include <stdio.h>

unsigned int produto(unsigned int a, unsigned int b){
    if (b==0)        
	return 0;
    if (b==1)        
	return a;
    return (a + produto(a, b-1));
}    
int main(){
    unsigned int a, b, c;
    printf("Digite a e b: ");
    scanf ("%u %u", &a, &b);
    c = produto(a, b);
    printf("%u X %u = %u", a, b, c);
	return 0;
}



