#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag88-1
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a  = 1;
	
	while(a < 100){
		printf("%d \n", a);
		a = a + 2;
	}
	
	system("Pause");
	return 0;
}
