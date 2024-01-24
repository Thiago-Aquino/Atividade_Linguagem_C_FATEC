#include <stdio.h>
int main(void){
	struct ficha_aluno {
		char nome[21];
		char matricula[9];
		float mediaFinal;
	};
	
	struct ficha_aluno aluno;
	
void leAluno (){
	int i;
	for (i=0; i<5; i++){
		printf("\nDigite o nome do aluno %d :", i+1);
		fgets(aluno.nome, 21, stdin);
		
		printf("Digite a matricula do aluno %d :", i+1);
		fgets(aluno.matricula, 9, stdin);
		
		printf("Digite a nota do aluno %d :", i+1);
		scanf("%f", &aluno.mediaFinal);
	}
}


void imprimeAluno()	
	int i;
	for (i=0; i<5; i++){
		
		printf("Nome : %s ", aluno.nome);
		printf("Matricula : %s ", aluno.matricula);
		printf("Media Final : %.2f ", aluno.mediaFinal);
}

int main(){
	leAluno(aluno, 5);
	imprimeAluno(aluno, 5);
	return 0;
}


