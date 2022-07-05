#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag99-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	for(int i = 50; i <= 200; i++){
		printf("Valor = %d\n", i);
	}
	
	
	system("Pause");
	return 0;
}
