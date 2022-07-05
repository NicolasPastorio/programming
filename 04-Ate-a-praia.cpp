#include <stdio.h>
#include <stdlib.h>
//04-Ate-a-praia
int main(){
	
	int local, litros, gasolina;
	
	printf("Favor, informe a distancia do endereco atual ate a praia(km): ");
	scanf("%d", &local);
	
	litros = local/13; //quantidade de litros de combustivel
	
	gasolina = litros*4; //R$4,00 valor da gasolina
	
	printf("Com um distancia de %d km gastara R$%d,00 com conbustivel.\n", local, gasolina);
	
	system("Pause");
	return 0;
}
