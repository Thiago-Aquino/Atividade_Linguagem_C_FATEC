//Rascunho
#include <stdio.h>

int main(){
	int x = 3, y, a = 5, b = 3;
	y = (x * (x + 1) * x++);
	printf("\nValor de X: %d", x);
	printf("\nValor de Y: %d", y);
	b*= (a + 1);
	printf("\nValor de X2: %d", a);
	printf("\nValor de Y2: %d", b);
	
	
	return 0;
}
