#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag90-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	printf("Todos os pares números de 10 a 200: \n");
	printf("-------------------------------\n");
	
	for (int a = 10; a < 200; a++){
		if(a % 2 == 0){
			printf("(%d)\n", a);
		}
	}
	
	printf("-------------------------------\n");
	
	
	system("Pause");
	return 0;
}
