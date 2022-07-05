#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag99-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	//comando break.
	
	for(int i = 1; i < 1000; i++){
		if(i == 10)
			break;
		printf("valor[%d]_\n", i);
	}
	
	system("Pause");
	return 0;
}
