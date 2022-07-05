#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-03
//todos os números divisiveis por 5
//no intervalo de 1 a 1000
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	for (int a = 0; a <= 1000; a++){
		if (a % 5 == 0)
			printf("%d\n", a);
	}
	
	system("PAUSE");
	return 0;
}
