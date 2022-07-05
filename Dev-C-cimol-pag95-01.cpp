#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag95-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int valor1, valor2;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor1);
	printf("Favor, informe outro valor inteiro: ");
	scanf("%d", &valor2);
	
	if (valor2 > valor1){
		
		do{
			printf("%d \n", valor1);
			valor1++;	
		}while(valor1 <= valor2);
		
	} else {
		printf("O valor inicial é maior ou superior a valor final!\n");
	}
	
	
	system("Pause");
	return 0;
}
