#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag93-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c;
	
	printf("Favor, informe dois(inteiros) valores inteiros para \n"
	 "    definir um intervalo,\n "
	"a: valor inicial e b: valor final do intervalo!\n");
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	
	for (int c = a; c <= b; c++){
		if (c % 2 == 0)
			printf("%d \n", c);
	}
	
	system("Pause");
	return 0;
}
