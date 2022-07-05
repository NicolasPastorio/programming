#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-09
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*números ímprares e divisíveis por 
	3 e 5 no intervalo de 1 a 1000*/
	
	for(int a = 1; a < 1000; a += 2){
		if (a % 3 == 0 && a % 5 == 0)
			printf("Valor ímpar e divisível por 3 e 5: %d\n", a);
	}
	
	
	
	system("Pause");
	return 0;
}
