#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag97-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float nota1[6], nota2[6], media[6];
	int i = 0, j;
	
	while(i < 6){
		j = 0;
		while(j < 2){
			printf("------------------------------------\n");
			printf("Informe a %do nota do aluno %d: ", j+1, i+1);
			scanf("%f", &nota1[i]);
			j++;
			printf("Informe a %do nota do aluno %d: ", j+1, i+1);
			scanf("%f", &nota2[i]);
			printf("------------------------------------\n");
			j++;
		}
		i++;
	}
	
	for (i = 0; i < 6; i++){
		media[i] = (nota1[i]+nota2[i])/2;
		printf("------------------------------------\n");
		printf("Média do aluno %d: %.2f\n", i+1, media[i]);
		if (media[i] <= 3.0)
			printf("STATUS: Aluno Reprovado!\n");
		else if (media[i] > 3 && media[i] < 7)
			printf("STATUS: Aluno e recuperação!\n");
		else 
			printf("STATUS: Aluno aprovado!\n");
		printf("------------------------------------\n");
	}
	
	
	
	
	system("Pause");
	return 0;
}
