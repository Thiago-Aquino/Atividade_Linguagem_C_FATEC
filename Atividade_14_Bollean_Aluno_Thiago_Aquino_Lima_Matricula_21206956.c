#include <stdio.h>
#include "bollean.h"

int main(){
	printf("%s\n", bool(not false));
	printf("%s\n", bool(false and true));
	printf("%s\n", bool(true or false));
	return 0;
}
