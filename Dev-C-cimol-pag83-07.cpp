#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag83-07
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[3];
	int aux;
	
	printf("Informe três valores inteiros: \n");
	printf("\n");
	printf("---------------------------\n");
	for(int i = 0; i < 3; ++i){
		printf("VALOR %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("---------------------------\n");
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0+i; j < 3; ++j){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}		
		}
	}
	
	printf("\n");
	printf("---------------------------\n");
	for(int i = 0; i < 3; ++i){
		printf("VALOR %d: %d.\n", i+1, vetor[i]);
	}
	printf("---------------------------\n");
	
	system("Pause");
	return 0;
}
