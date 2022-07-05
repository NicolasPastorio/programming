#include <stdio.h>
#include <stdlib.h>
//03
int main(){
	
	//declaração de variáveis
	int num1, num2;
	
	//requisição de valor ao usuário
	printf("---------------------------------------------\n");
	printf("Favor, informar dois numeros inteiros quaisquer: \n");
	printf("Primeiro valor: ");
	scanf("%d", &num1);
	printf("Segundo valor: ");
	scanf("%d", &num2);
	printf("---------------------------------------------\n");
	printf("\n");
	
	//estrutura condicional
	if (num1 > num2) {
		printf("---------------------------------------------\n");
		printf("O numero %d e maior que %d!\n", num1, num2);
		printf("---------------------------------------------\n");
	} else if (num2 > num1) {
		printf("---------------------------------------------\n");
		printf("O numero %d e maior que %d!\n", num2, num1);
		printf("---------------------------------------------\n");
	} else { // if (num1 == num2)
		printf("---------------------------------------------\n");
		printf("O numero %d e igual a %d!\n", num1, num2);
		printf("---------------------------------------------\n");
	}
	
	system("Pause");
	return 0;
}
