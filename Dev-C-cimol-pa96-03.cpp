#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pa96-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	float vetor[10], media = 0;
	int a = 0;
	
	printf("Digite 10 valores: \n\n");
	
	//comando de leituura
	while(a < 10){
		printf("Valor %d:  ", a+1);
		scanf("%f", &vetor[a]);
		media = media + vetor[a];
		a++;
	}printf("\n");
	
	media = media/10;
	 printf("Média dos Valores: %.2f. \n\n", media);
	 
	 
	system("Pause");
	return 0;
}
