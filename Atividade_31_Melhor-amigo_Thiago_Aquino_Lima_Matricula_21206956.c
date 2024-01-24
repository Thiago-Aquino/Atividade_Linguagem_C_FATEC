#include <stdio.h>
#include "agenda.h"

int main(){
	PESSOA agenda[5];
	LeAgenda(agenda, 5);
	ImprimeAgenda(agenda, 5);
	return 0;
}
