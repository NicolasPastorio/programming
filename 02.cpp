#include <stdio.h>
#include <stdlib.h>
//02
int main(){
	
	//declaração de variáveis
	int numero;
	
	//requisição de valor ao usuário
	printf("---------------------------------------------\n");
	printf("Favor, informar um numero inteiro qualquer: ");
	scanf("%d", &numero);
	printf("---------------------------------------------\n");
	
	//estrutura condicional
	if (numero >= 10 && numero <= 15){//caso a condição for verdadeira
		printf("---------------------------------------------\n");
		printf("O valor %d esta entre 10 e 15.\n", numero);
		printf("---------------------------------------------\n");	
	} else {//caso a condição não for verdadeira
		printf("---------------------------------------------\n");
		printf("O valor %d nao esta entre 10 e 15.\n", numero);
		printf("---------------------------------------------\n");	
	}
	
	system("Pause");
	return 0;
}
