#include <stdio.h>

//Fun��o max(a, b)//				
double max (double a, double b) {
			   if ( a>b ) 	
				  return a;		/* interrompe a fun��o*/
			   return b;
			}
			

int main(){
		int y;
		y = max (10, 20);	/* y recebe 20*/
		printf("%d", y);
		return 0;
}
