#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-16
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float salbruto, descontos, emprestimo, porcento;
	int vezes;
	float parcelas, liquido;
	//fçor
	
	printf("Informe o salário bruto do cliente: R$");
	scanf("%f", &salbruto);
	printf("Informe o valor total dos descontos: R$");
	scanf("%f", &descontos);
	
	//informações referesmtes ao empréstimo
	printf("Informe o valor do empréstimo que desejas fazer: R$");
	scanf("%f", &emprestimo);
	printf("Informe a quantidade de vezes que desejas fazer o empréstimo: ");
	scanf("%d", &vezes);
	
	liquido = salbruto - descontos;
	parcelas = emprestimo / vezes;
	porcento = 0.3*liquido;
	
	if (porcento >= parcelas){
		printf("Parabéns! O empréstimo foi aprovado!\n\n");
	} else 
		printf("O empréstomo foi recusado por esceder o salário bruto!\n\n");
		
	printf("----------------------------------\n");
	printf("Salário bruto R$%.2f \n", salbruto);
	printf("Valor dos descontos R$%.2f \n", descontos);
	printf("Salário líquido R$%.2f \n", liquido);
	printf("Valor do empréstimo R$%.2f parcelado em %d vezes\n", emprestimo, vezes);
	printf("   fica por %d vezes de %.2f(30 por cento do salário liquido)\n", vezes, parcelas);
	printf("Parcela máxima permitida: R$%.2f\n", porcento);
	printf("----------------------------------\n\n");
	
	
	system("Pause");
	return 0;
}
