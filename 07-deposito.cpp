#include <stdio.h>
#include <stdlib.h>
//07-Deposito
int main(){
	
	float valor, juros;
	
	printf("Informe o valor que desejas depositar(R$): ");
	scanf("%f", &valor);
	printf("\n");
	
	juros = valor * 1.09; // 1.9 = 9/100
	
	printf("------------------------------\n");
	printf("\n");
	printf("Em um mes voce tera R$%.2f.\n", juros);
	printf("\n");
	printf("------------------------------\n");
	
	system("Pause");
	return 0;
}
