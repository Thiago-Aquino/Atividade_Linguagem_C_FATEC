#include <stdio.h>

	 typedef struct {
		char nome[21];
		char matricula[9];
		float mediaFinal;
	}ALUNO;
	
void leAluno(ALUNO t[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("\nDigite o nome do aluno %d : ", i+1);
		gets(t[i].nome);
		
		printf("Digite a matricula do aluno %d : ", i+1);
		gets(t[i].matricula);
		
		printf("Digite a nota do aluno %d : ", i+1);
		scanf("%f%*c", &t[i].mediaFinal);
	}
}

void imprimeAluno(ALUNO t[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("\nNome : %s ", t[i].nome);
		printf("Matricula : %s ", t[i].matricula);
		printf("Media Final : %.2f ", t[i].mediaFinal);
	}
}

int main(){
	ALUNO turma[5];
	leAluno(turma, 5);
	imprimeAluno(turma, 5);
	return 0;
}

		
		
