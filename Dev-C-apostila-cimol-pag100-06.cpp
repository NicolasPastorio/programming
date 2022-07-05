#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-06
//informar se um número é par ou impar
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	printf("Favor, informar um valor inteiro qualquer:  ");
	scanf("%d", &valor);
	
	if(valor % 2 == 0)
		printf("o valor informado(%d) é par!\n", valor);
	else 
		printf("O valor informado(%d) é impar!\n", valor);
	
	system("PAUSE");
	return 0;
}
