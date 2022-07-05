#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	float salBruto, descontos, liquido, emprestimo, valor;
	float parcelas;
	
	printf("Informe seu salário bruto: R$");	
	scanf("%f", &salBruto);//salário bruto
	printf("Informe o valor dos descontos: R$");
	scanf("%f", &descontos);//descontos
	
	liquido = salBruto - descontos;//salário sem descontos
	emprestimo = liquido * 0.3;//empréstimo = 30% do salário liquido
	
//	printf("O valor do emprestimo é: R$%.2f", emprestimo);

	printf("Favor informe o valor de empréstimo que desejas adiquirir: R$");
	scanf("%f", &valor);//valor total de emrestimo
	printf("Informe as parcelas: ");
	scanf("%f", &parcelas);//em quantas vezes o usuário deseja dividir o total 
	
	valor /= parcelas;//execução do comentário anterior
	
	if(valor <= emprestimo){//valor limite de 30% para a aprovação do emprestimo
		printf("Emprestimo aprovado!\n");
		printf("Ótimo, serão %.0f vezes de R$%.2f\n", parcelas, valor);
	}
		
	else{//caso maior que 30%
		printf("O emprestimo não pode ser aprovado, pois \n");
		printf(" escede o valor maximo permitido(R$%.2f)!\n", emprestimo);
	}
		
	system("PAUSE");
	return 0;
}
