
/* agenda.h */
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
		{ "João Santos" , "98476-8123", {20, 8, 2000}},
		{ "Igor Silva" , "98456-9879", {15, 7, 2002}},
		{ "Vinicius Lima" , "96621-7894", {30, 10, 2001}},
		{ "Felipe Junior" , "98621-4561", {5, 4, 1999}},
		{ "Guilherme Nunes" , "97894-1265", {18, 1, 1999}} };
		return 0;
	}
	
void LeAgenda(PESSOA ag[], int n){
	int i;
	
	for (i=0; i<n; i++){
		printf("\n%do Nome: ", i+1);
		gets (ag[i].nome);
		printf("\nFone: ");
		gets(ag[i].fone);
		printf("\nDia Mes Ano do nascimento");
		scanf("%d %d %d %*c", &ag[i].nasc.dia, &ag[i]. nasc.mes, &ag[i].nasc.ano);
	}
}

void ImprimeAgenda(PESSOA ag[], int n){
	int i;
	
	for (i=0; i<n; i++){
		printf("\nNome: %s", ag[i].nome);
		printf("\nFone: %s", ag[i].fone);
		printf("\nData de nascimento: %d/%d/%d\n", ag[i].nasc.dia, ag[i].nasc.mes, ag[i].nasc.ano);
	}
}
