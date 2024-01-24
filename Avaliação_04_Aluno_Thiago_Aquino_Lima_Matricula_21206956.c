/*
Lucas Marques Bandechi		Matricula: 22106697
Thiago Aquino Lima 			Matrícula: 2120695
*/

#include <stdio.h>

int divide(int x, int y){
	if(y==1) return x;
	else if(x<y) return 0;
	else return 1 + divide(x-y, y);
}

int main(){
	int a, b;
	printf("\nDigite a: ");
	scanf("%d", &a);
	printf("\nDigite b: ");
    scanf("%d", &b);
    printf("\nO quociente da divisao de %d por %d: %d", a, b, divide(a, b));
    return 0;
}
