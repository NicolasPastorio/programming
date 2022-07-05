#include <stdio.h>
#include <stdlib.h>
//04-Natacao
int main(){
	//declaração de variáveis
	int idade;
	
	
	printf("Informe seu nome: \n");
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	//categorias
	if(idade >= 0 && idade < 5)
		printf("Proibido criancas com menos de 5 anos de idade!\n");
	if(idade >= 5 && idade <= 7)
		printf("Infantil A.\n");
	if(idade >= 8 && idade <= 10)
		printf("Infantil B.\n");
	if(idade >= 11 && idade <= 13)
		printf("Juvenil A.\n");
	if(idade >=14 && idade <= 17)
		printf("Juvenil B.\n");
	if(idade >= 18)
		printf("Adulto.\n");
	if(idade < 0)
		printf("Idade invalida!\n");
		
		
	system("PAUSE");
	return 0;
}
