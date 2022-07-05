#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag89-3
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int valor, tabuada = 0, resultado;
	
	printf("Informe um numero(inteiro): ");
	scanf("%d", &valor);
	
	while(tabuada < 11){
		resultado = valor * tabuada;  
		printf("%d X %d = %d\n", valor, tabuada, resultado);
		tabuada = tabuada + 1;
	}

	
	
	system("Pause");
	return 0;
}
