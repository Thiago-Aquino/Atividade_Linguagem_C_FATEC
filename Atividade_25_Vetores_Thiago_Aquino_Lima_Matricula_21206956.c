#include <stdio.h>

int main(){
	float A[10][3], s=0;
	int i,j;
	for (i=0; i<10; i++){
		for(j=0; j<2; j++){
			printf("Aluno %d - Nota %d\n", i+1, j+1);
			scanf("%f", &A[i][j]);
		}
		A[i][2] = (A[i][0] + A[i][1])/2;
		s = s + A[i][2];
	}
		s = s/10;
		for (i=0; i<10; i++){
			printf("\n");
			for (j=0; j<3; j++)
				printf("%.2f\t", A[i][j]);
				
			if (A[i][2] < s)
				printf(" - Nota abaixo da media");
			else if (A[i][2] > s)
				printf(" - Nota acima da media");
			else 
				printf(" - Nota na media");	
		}
		return 0;
}
