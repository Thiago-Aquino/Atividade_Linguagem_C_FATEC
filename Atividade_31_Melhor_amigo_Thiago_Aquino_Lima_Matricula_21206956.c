#include <stdio.h>

typedef struct {
		int dia;
		int mes;
		int ano;
	}DATA;
	
	typedef struct {
		char nome [31];
		char fone [21];
		DATA nasc;
	}PESSOA;
	
int main(){
	PESSOA agenda[5] ={
		{ "Joao Santos" , "98476-8123", {20, 8, 2000}},
		{ "Igor Silva" , "98456-9879", {15, 7, 2002}},
		{ "Vinicius Lima" , "96621-7894", {30, 10, 2001}},
		{ "Felipe Junior" , "98621-4561", {5, 4, 1999}},
		{ "Guilherme Nunes" , "97894-1265", {18, 1, 1999}} };

	int i;
	for (i=0; i<5; i++){
		printf("\nNome: %s", agenda[i].nome);
		printf("\nFone: %s", agenda[i].fone);
		printf("\nData de nascimento: %d/%d/%d\n", agenda[i].nasc.dia, agenda[i].nasc.mes, agenda[i].nasc.ano);
	}

	return 0;		
	}

