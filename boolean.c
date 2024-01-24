#include <stdio.h>
#define false (0)
#define true (1)
#define not !
#define and && 
#define or ||
#define bool(X) ((X)==1?"true":"false")


int main(){
	printf("%s\n", bool(not false));
	printf("%s\n", bool(false and true));
	printf("%s\n", bool(true or false));
	return 0;
}


