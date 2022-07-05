#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag97-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Taduaba de  1 a 10*/
	
	int number;
	
	for (int i = 1; i < 11; i++){
		for(int j = 1; j < 11; j++){
			number = i*j;
			printf("    %dX%d = %d \n", i, j, number);
		}
		printf("\n");
	}
	
	
	system("Pause");
	return 0;
}
