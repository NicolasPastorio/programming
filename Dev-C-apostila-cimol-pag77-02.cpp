#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag77-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2, nota3, media;
	
	printf("Informe as três notas do aluno:\n");
	printf("NOTA 1: ");
	scanf("%f", &nota1);
	printf("NOTA 2: ");
	scanf("%f", &nota2);
	printf("NOTA 3: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if(media >= 7.0){
		printf("MÉDIA: %.1f\n", media);
		printf("Aluno aprovado!\n");
	}
	
	if(media < 7.0 && media >= 5.0){
		printf("MÉDIA: %.1f\n", media);
		printf("Aluno em recuperção!\n");
	}
	
	if(media < 5.0){
		printf("MÉDIA: %.1f\n", media);
		printf("Aluno reprovado!\n");
	}
	
						
	system("PAUSE");
	return 0;
}
