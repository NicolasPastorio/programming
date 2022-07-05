#include <stdio.h>
#include <stdlib.h>
//04
int main(){
	
	//declaração de variáveis
	float C, F;
	
	printf("---------------------------------------------\n");
	printf("Informe a temperatura em graus Celcius: ");
	scanf("%f", &C);
	printf("---------------------------------------------\n");
	
	//conversão
	F = 1.8*(C+32);
	
	printf("---------------------------------------------\n");
	printf("%.2f graus Celcius e igual a %.2f graus Fahrenheit!\n", C, F);
	printf("---------------------------------------------\n");
	
	
	system("Pause");
	return 0;
}
