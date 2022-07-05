#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-04
//exibir a quantidade de números 
//divisíveis por 3 no intervalo 
//de 1 a 1000
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a = 1, total = 0;
	
	while (a < 1000){
		if (a % 3 == 0){
			total = total + 1;
		}
		a++;
	}
	
	printf("São ao todo %d valores divisíveis por 3\n", total);
	printf("no intervalo de 1 a 1000!\n");
	
	system("PAUSE");
	return 0;
}
