#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag85-15
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float quantidade, desconto, valor, pagar;
	char opcao;
	
	printf("------------------------------------------\n");
	printf("Informe a quantidade de combustível(litros): ");
	scanf("%f", &quantidade);
	printf("Álcool(A) ou gasolina(G)? ");
	scanf("%c", &opcao);
	printf("------------------------------------------\n");
	
	if(opcao == 'A' || opcao == 'a'){
		if(quantidade <= 20){
		valor = quantidade * 4; //4R$ o litro
		desconto = valor*0.03; //3%
		pagar = (valor - desconto)*4;
		}
		else if(quantidade > 20){
			valor = quantidade * 4;//4R$ o litro
			desconto = valor * 0.05; //5%
			pagar = (valor - desconto)*4;
		}	
	}
	else if(opcao == 'G' || opcao == 'g'){
		if(quantidade <= 20){
		valor = quantidade * 4; //4R$ o litro
		desconto = valor * 0.04; //4%
		pagar = (valor - desconto)*4;//4R$ o litro
		}
		else if(quantidade > 20){
			valor = quantidade * 4;//4R$ o litro
			desconto = valor * 0.06; //6%
			pagar = (valor - desconto)*4;//4R$ o litro
		}	
	} else { printf("Os valores inseridos são inválidos!\n"); }
	
	printf("------------------------------------------\n");
	printf("Quantidade de litros: %.1f\n", quantidade);
	printf("Valor do desconto: R$%.2f\n", desconto);
	printf("Valor sem desconto: R$%.2f\n", valor);
	printf("Valor com desconto: R$%.2f\n", pagar);
	printf("------------------------------------------\n");
	
	system("Pause");
	return 0;
}
