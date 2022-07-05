#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag89-5
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int senha, tentativas = 0;
	
	printf("Favor informar a senha de seis(6) dígitos: ");
	scanf("%d", &senha);
	
	if(senha == 123321){
		printf("Bem vindo, usuário!\n");
	}else{
		while(tentativas < 2){
			printf("Favor informar a senha de seis(6) dígitos novamente: ");
			scanf("%d", &senha);
			if(senha == 123321){
				printf("Bem vindo, usuário!\n");
				tentativas = 4;
			}
			else{
				tentativas = tentativas + 1;
			}
		}
		
		if(tentativas == 2){
			printf("Senha bloqueada!\n");
		}
	}
	

	
	system("Pause");
	return 0;
}
