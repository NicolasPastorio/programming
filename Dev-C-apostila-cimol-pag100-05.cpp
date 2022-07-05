#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-05
//todos os números primos
//no intervalo de 1 a 2000
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	

	for(int g = 2; g <= 2000; g++){
		if(g % 2 != 0 || g == 2)
			printf("%d\n", g);
	}
	system("PAUSE");
	return 0;
}
