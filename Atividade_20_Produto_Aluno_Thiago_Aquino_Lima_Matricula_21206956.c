/*Codifique uma fun��o recursiva que calcule o produto de dois naturais usando soma.
Quais as solu��es triviais?
Qual a solu��o geral?
O problema est� diminuindo? */

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



