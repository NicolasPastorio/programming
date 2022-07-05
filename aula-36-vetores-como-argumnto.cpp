#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
//aula-37-vetores-como-argumnto
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");

	int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
	int i;
	void ordemCrescente(int vetor[], int n);
	
	printf("------------------------------------\n");
	for(i = 0; i < 10; ++i){
		printf("%d  ", vetor[i]);
	}	printf("\n");
	printf("------------------------------------\n");
	
	ordemCrescente(vetor, 10);
	
	printf("------------------------------------\n");
	for(i = 0; i < 10; ++i){
		printf("%d  ", vetor[i]);
	}	printf("\n");
	printf("------------------------------------\n");
	
	system("Pause");
	return 0;
}

	//===========================================
	void ordemCrescente(int vetor[], int n){
		int i, j, aux;
		
		//--------------------------------------
		for(i = 0; i < n; ++i){
			for(j = i+1; j < n; ++j){
				//-----------------------
				if(vetor[i] > vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
				//-----------------------
//				if(vetor[i]+vetor[j] == 12){
//					printf("%d + %d = 12.\n", vetor[i], vetor[j]);
//				}
			}
		}
		//--------------------------------------
	}
	//===========================================
