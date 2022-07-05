#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag84-14
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int codigo;
	
	printf("----------------------------------------\n");
	printf("       AGÊNCIA DOS CORREIOS\n");
	printf("----------------------------------------\n");
	printf("Digite o código de destino inpresso na caixa: (1 ate 29)_");
	scanf("%d", &codigo);
	printf("----------------------------------------\n");
	
	if(codigo >= 1 && codigo <= 5)
		printf("DESTINO: Brasil.\n");
	else if(codigo >= 6 && codigo <= 9)
		printf("DESTINO: EUA.\n");
	else if(codigo >= 10 && codigo <= 12)
		printf("DESTINO: Rússia.\n");
	else if(codigo >= 15 && codigo <= 20 || codigo >= 30 && codigo <= 35)
		printf("DESTINO: Suíça.\n");	
	else if(codigo >= 13 && codigo <= 14)
		printf("DESTINO: Afeganistão.\n");
	else if(codigo >= 21 && codigo <= 29)
		printf("DESTINO: França.\n");
	else 
		printf("O valor digitado não é válido!\n");
		
	system("Pause");
	return 0;
}
