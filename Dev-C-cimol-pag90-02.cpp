#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag90-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int valor1, valor2;
	
	printf("Será mostrado todos os números no intervalo informado.\n");
	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &valor1);
	printf("Informe o último valor inteiro: ");
	scanf("%d", &valor2);
	
	if (valor1 % 2 != 0 && valor2 % 2 != 0){
		for (int c = valor1; c <= valor2; c = c + 2){
			printf("(%d)\n", c);
		}	
	} else if (valor1 % 2 != 0 && valor2 % 2 == 0){
		for (int c = valor1; c < valor2; c = c + 2){
			printf("(%d)\n", c);
		}	
	} else if (valor1 % 2 == 0 && valor2 % 2 != 0){
		valor1 = valor1  + 1;
		for (int c = valor1; c <= valor2; c = c + 2){
			printf("(%d)\n", c);
		}	
	} 
	else { // (valor1 % 2 == 0 && valor2 % 2 == 0)
		valor1 = valor1  + 1;
		for (int c = valor1; c < valor2; c = c + 2){
			printf("(%d)\n", c);
		}	
	}
		
	
		
	system("Pause");
	return 0;
}
