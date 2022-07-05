#include <stdio.h>
#include <stdlib.h>
//01-programa-mês-do-ano
int main(){
	//declaração de variáveis
	int mes;
	
	//solicitção ao usuário
	printf("Favor, informe o numero do mes: ");
	scanf("%d", &mes);
	
	if(mes == 1)
		printf("Janeiro.\n");
	else if(mes == 2)
		printf("Fevereiro.\n");
	else if(mes == 3) 
		printf("Marco.\n");
	else if(mes == 4)
		printf("Abril.\n");
	else if(mes == 5)
		printf("Maio.\n");
	else if(mes == 6)
		printf("Junho.\n");
	else if(mes == 7)
		printf("Julho.\n");
	else if(mes == 8)
		printf("Agosto.\n");
	else if(mes == 9)
		printf("Setembro.\n");
	else if(mes == 10)
		printf("Outubro.\n");
	else if(mes == 11)
		printf("Novembro.\n");
	else if(mes == 12)
		printf("Dezembro.\n");
	else
		printf("O valor informado e invalido.\n");
		
	system("PAUSE");
	return 0;
}
