#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag101-18
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float valor1, valor2, soma;
	int decisor;
	
	do{
		printf("Digite o primeiro valor: ");
		scanf("%f", &valor1);
		printf("Digite o segundo valor: ");
		scanf("%f", &valor2);
		
		soma = valor1 + valor2;
		
		printf("A soma entre %.2f e %.2f é: %.2f!\n", valor1, valor2, soma);
		
		printf(
			"Desejas refazer esta operação?\n"
			"(1)Para refazer;\n"
			"(2)Para sair;\n"
			": "				);
		scanf("%d", &decisor);
		if(decisor == 1)
			printf("\n");
	} while(decisor == 1);
	
	
	
	system("Pause");
	return 0;
}
