#include <stdio.h>
#include <stdlib.h>
//03-Biblioteca
int main(){
	//declaração de variáveis
	int num;
	
	//solicitação ao usuário
	printf("--------MENU DA BIBLIOTECA--------\n");
	printf(
		"Escolha uma das opcoes:\n"
		"-------------------------------------\n"
		"[1]Retirar um livro.\n"
		"[2]Devolver um livro.\n"
		"[3]Renovar a retirada de um livro.\n"
		"-------------------------------------\n"
		);
	scanf("%d", &num);
	
	//opções 
	if(num == 1) 
		printf("Livro retirado com sucesso!\n");
	else if(num == 2) 
		printf("Livro devolvido co sucesso!\n");
	else if(num == 3)
		printf("Livro Renovado!\n");
	else
		printf("Opcao invalida!\n");
	system("PAUSE");
	return 0;
}
