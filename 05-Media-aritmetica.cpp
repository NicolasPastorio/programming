#include <stdio.h>
#include <stdlib.h>
//05-Media-aritmetica
int main(){
	
	int num1, num2, num3;
	float media;
	
	printf("Favor informe tres valores inteiros.\n");
	printf("VALOR  1: ");
	scanf("%d", &num1);	
	printf("VALOR  2: ");
	scanf("%d", &num2);
	printf("VALOR  3: ");
	scanf("%d", &num3);
	
	media = (num1+num2+num3)/3.0;
	
	printf("----------------------------------------\n");
	printf(" A media aritmtiica entre %d, %d e %d e %.2f\n", num1, num2, num3, media);
	printf("----------------------------------------\n");
			
	system("Pause");
	return 0;
}
