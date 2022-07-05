#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-13
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Pedir um valor ao usuário e informar 
	seu fatorial, ex: 5! = 1x2x3x4x5*/
	
	int n, fatorial = 1, z = 1;
	
	printf("Informe um número inteiro e maior que zero(0): ");
	scanf("%d", &n);
	printf("\n");
	
	if(n > 1){
		printf("%d! = 1 x ", n);
		
		for(int a = 2; a <= n; a++){
			if(a != n)
				printf("%d x ", a);
			else 
				printf("%d", a);
			z = z * a;
		}
		printf(" = %d \n\n", z);
	} else if (n == 1){
		printf("1! = 1 \n\n");
	} else { printf("Favor informar valor 1 ou maior!\n\n"); }
	

	system("Pause");
	return 0;
}
