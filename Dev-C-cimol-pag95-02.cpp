#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag95-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a = 1, b = 1, c, d;
	
	do{
		while(b < 11){
			c = a * b; 
			printf("%dx%d = %d \n", a, b, c);
			b++;
		}
		printf("Pressone 1(um) para continuar: ");
		scanf("%d", &d);
		if(d == 1){
			a++;
			b = 1;	
		}
	}while(d == 1);
	prinf("\n");
	printf("FIM!\n\n\n");
	
	system("Pause");
	return 0;
}
