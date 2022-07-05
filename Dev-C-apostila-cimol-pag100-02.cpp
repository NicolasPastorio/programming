#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-02
//todos os números pares entre 1 e 100
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int l = 1;
	
	while (l <= 100){
		if(l % 2 == 0)
			printf("%d\n", l);
		l++;
	}
	
	system("Pause");
	return 0;
}
