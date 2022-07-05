#include <stdio.h>
#include <stdlib.h>
//02-idade
int main(){
	
	int nascimento, atual, idade;
	
	printf("Informe o ano em que voce nasceu: ");
	scanf("%d", &nascimento);
	printf("Informe o ano atual: ");
	scanf("%d", &atual);
	
	idade = atual - nascimento;
	
	printf("Voce possue %d anos de idade.\n", idade);
	
	system("PAUSE");
	return 0;
}
