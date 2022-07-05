#include <stdio.h>
#include <stdlib.h>
//05-Fahrenheit
//formula:  (F=1.8*C+32);
int main(){
	
	int C, F;
	
	printf("Informe a temperatura em graus Celcius: ");
	scanf("%d", &C);
	
	F = 1.8*(C+32);
	
	printf("\n");
	printf("-----------------------------------------------------\n");
	printf("%d graus Celcius e igual a %d graus Fahrenheit.\n", C, F);
	printf("-----------------------------------------------------\n");
	printf("\n");		
	
	system("Pause");
	return 0;
}
