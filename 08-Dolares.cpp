#include <stdio.h>
#include <stdlib.h>
//08-Dolarres
int main(){
	
	float cotacao, valor, totValor;
	
	printf("Favor, informe o valor da cotacao do dolar: R$ ");
	scanf("%f", &cotacao);//cotação exemplo = R$1,00 = US$ 4,00
	printf("Informe o valor em dolares que deseja converter para reais: US$");
	scanf("%f", &valor);//valor em dolares a ser passado para reais
	
	totValor = valor * cotacao;
	
	printf("-----------------------------------------\n");
	printf("\n");
	printf("US$ %.2f equialem a %.2f reais!\n", valor, totValor);
	printf("\n");
	printf("-----------------------------------------\n");
	
	system("Pause");
	return 0;
}
