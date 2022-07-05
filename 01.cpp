#include <stdio.h>
#include <stdlib.h>
//01
int main(){
	//declaração de variavel
	int inteiro;
	
	//requisição de valor ao usuário
	printf("----------------------------------\n");
	printf("Favor informar um numero inteiro: ");
	scanf("%d", &inteiro);
	printf("----------------------------------\n");
	printf("\n");
	
	if (inteiro % 2 == 0){//condição para valor par
		printf("----------------------------------\n");
		printf("O valor %d e PAR!\n", inteiro);
		printf("----------------------------------\n");	
	} else {//condição para valor ímpar
		printf("----------------------------------\n");
		printf("O valor %d e IMPAR!\n", inteiro);
		printf("----------------------------------\n");
	}
	
	
	system("Pause");
	return 0;
}
