#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag82-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int idade, plano;
	
	printf("Referente ao plano  de saúde,\n"
	"informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 10){
		plano = 100 + 80;
		printf("Valor do plano R$%d,00.\n", plano);
	}
	if(idade >= 10 && idade < 30){
		plano = 100 + 50;
		printf("Valor do plano R$%d,00.\n", plano);
	}
	if(idade >= 30 && idade < 60){
		plano = 100 + 95;
		printf("Valor do plano R$%d,00.\n", plano);
	}
	if(idade >= 60){
		plano = 100 + 130;
		printf("Valor do plano R$%d,00.\n", plano);
	}
		
	system("PAUSE");
	return 0;
}
