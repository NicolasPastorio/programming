#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag99-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	//comando  continue
	
	for (int i = 1; i < 100; i++){
		if (i % 5 != 0)
			continue;
		printf("valor[%d]_\n", i);	
	}
		
	system("Pause");
	return 0;
}
