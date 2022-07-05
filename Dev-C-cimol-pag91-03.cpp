#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag91-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	//vetor inteiro
	int vetor[10];
	
	int intervalo = 0, naointervalo = 0;
	
	//requisição ao usuário
	printf("Favor informar 10 valores inteiros: \n");
	printf("\n");
	printf("------------------------------------\n");
	//siclo para leitura dos 10 valores
	//que serão armazenados no vetor
	for (int c = 0; c < 10; c++){
		printf("%do valor = ", c+1);
		scanf("%d", &vetor[c]);
		if (vetor[c] >= 10 && vetor[c] <= 20){
			intervalo = intervalo + 1;
		} else {// (vetor[c] < 10 && vetor[c] > 20)
			naointervalo = intervalo + 1;
		}
	}
	printf("------------------------------------\n");
	printf("\n");
	
	printf("------------------------------------\n");
	printf("Quantidade de valores entre 10 e 20:  %d\n", intervalo);
	printf("Quantidade de valores fora do intervalo:  %d\n", intervalo);
	printf("------------------------------------\n");
	printf("\n");
	
	system("Pause");
	return 0;
}
