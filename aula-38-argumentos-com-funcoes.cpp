#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//aula-38-argumentos-com-funcoes
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	void funcaoPrint(int x, int vetor[]);
	int x = 10;
	int vetor[3] = {10};
	
	funcaoPrint(x, vetor);
	
	printf("Variável int na funcao principal = %d \n", x);
	printf("Vetor na função principal = %d \n", vetor[1]);
	
	
	
	system("Pause");
	return 0;
}

		//---------------------------------------------------------
		void funcaoPrint(int x, int vetor[]){
			x = x + 10;
			vetor[1] = 20;
			
			printf("Variável int na função print = %d \n", x);
			printf("Vetor na função print = %d \n\n", vetor[1]);
		}
		//---------------------------------------------------------
