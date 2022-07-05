#include <stdio.h>
#include <stdlib.h>
//03-operacoes-de-inteiros
int main(){
	
	int num1, num2, soma, subtracao, multi, divisao;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe outro numero inteiro: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	printf("A soma de %d por %d e %d.\n", num1, num2, soma);
	subtracao = num1 - num2;
	printf("A subtracao de %d por %d e %d.\n", num1, num2, subtracao);
	multi = num1 * num2;
	printf("A multiplicacao de %d por %d e %d.\n", num1, num2, multi);
	divisao = num2/num1;
	printf("A divisao de %d por %d e %d.\n", num2, num1, divisao);
	
	system("Pause");
	return 0;
}
