#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-11
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Dado um número inteiro positivo n, imprimir
	os n primeiros naturais ímpares.
	exemplo: n=4 = 1,3,5,7*/

	int naturais, overflow = 0;

	printf("Informe a quantidade de números naturais ímpares \n"
		"que desejas que seja impreço: ");
		scanf("%d", &naturais);

	for(int a = 1; ; a++){
			if(a % 2 != 0){//se 'a' for ímopar
				printf("%d ", a);
				overflow = overflow + 1;
			} if(overflow == naturais){break;}
	}

	system("Pause");
	return 0;
}
