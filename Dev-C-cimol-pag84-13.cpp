#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag84-13
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float compra, total, imposto;
	
	printf("Favor informar o valor da compra: R$");
	scanf("%f", &compra);
	
	if(compra <= 10.0){
		imposto = (compra * 0.03);
		total = compra + imposto;
	} else if(compra >= 10.01 && compra <= 99.99){
		imposto = (compra * 0.05);
		total = compra + imposto;
	} else if(compra >= 100.0 && compra <= 299.99){
		imposto = (compra * 0.1);
		total = compra + imposto;
	} else if(compra >= 300.0){
		imposto = (compra * 0.3);
		total = compra + imposto;
	}else{
		printf("O valor digitado é inválido!\n");
	}
	printf("R$%.1f de imposto!\n", imposto);
	printf("Valor total a ser pago: R$%.2f!", total);
	
	system("Pause");
	return 0;
}
