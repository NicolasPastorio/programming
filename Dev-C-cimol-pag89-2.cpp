#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag89-2
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int alunos, a = 0;
	float media = 0, mediaTurma;
	
	printf("Favor, informe quantos alunos tem em sua sala de aula: ");
	scanf("%d", &alunos);
	
	float vetor[alunos];
	
	while(a < alunos) {
		printf("Informe a nota do %do aluno: ", a+1);
		scanf("%f", &vetor[a]);
		media = media + vetor[a];
		a = a + 1; 
	} a = 0;
//	while(a < alunos) {
//		printf("Nota do %do aluno : %.2f\n", a, vetor[a]);
//		a = a + 1; 
//	}
//	
	printf("\n");
	mediaTurma = media / alunos;
	
	printf("--------------------------------\n");
	printf("Média da turma: %.1f\n", mediaTurma);
	printf("--------------------------------\n");
	
	system("Pause");
	return 0;
}
