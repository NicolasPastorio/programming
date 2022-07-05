#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//dev-C-apostila-cimol-pag75-05
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	char opcao;
	int num1, num2, resultado;
	
	printf("-------------------------------\n");
	printf("Calculadora de números inteiros\n");
	printf("-------------------------------\n");
	
	printf("Informe a operação que desejas fazer: [+, -, *, /]: ");
	scanf("%c", &opcao);
	
	
	
	if(opcao == '+'){
		printf("Primeiro valor: ");
		scanf("%d", &num1);
		printf("Segundo valor: ");
		scanf("%d", &num2);
		
		resultado = num1 + num2;
		
		printf("%d + %d = %d\n", num1, num2, resultado);
	}
	
	
	if(opcao == '-'){
		printf("Primeiro valor: ");
		scanf("%d", &num1);
		printf("Segundo valor: ");
		scanf("%d", &num2);
		
		resultado = num1 - num2;
		
		printf("%d - %d = %d\n", num1, num2, resultado);
	}
	
	if(opcao == '*'){
		printf("Primeiro valor: ");
		scanf("%d", &num1);
		printf("Sugundo valor: ");
		scanf("%d", &num2);
		
		resultado = num1 * num2;
		
		printf("%d * %d = %d\n", num1, num2, resultado);
	}
	
	if(opcao == '/'){
		printf("Primeiro valor: ");
		scanf("%d", &num1);
		printf("Seguado valor: ");
		scanf("%d", &num2);
		
		resultado = num1 / num2;
		
		printf("%d / %d = %d\n", num1, num2, resultado);
	}
	
	system("PAUSE");
	return 0;
}
