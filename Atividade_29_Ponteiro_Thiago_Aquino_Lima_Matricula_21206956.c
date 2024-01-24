#include <stdio.h>

void ordena(int *x, int *y){
	int z;
	if (*x > *y){
		z = *x;
		*x = *y;
		*y = z;
	}
}

int main (){
	int a = 12, b = 5;
	printf("antes: a = %d, b = %d", a, b);
	ordena (&a, &b);
	printf("\nDepois: a = %d, b = %d", a, b);
	getch();
	return 0;
}
