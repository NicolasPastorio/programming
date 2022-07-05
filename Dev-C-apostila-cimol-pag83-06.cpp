#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-06
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int dia, mes;
	
	printf("-----------------ANIVERSSÁRIO-----------------\n");
	printf("Informe o número do dia: ");
	scanf("%d", &dia);
	printf("Informe o número do mes: ");
	scanf("%d", &mes);
	
		//--------------------------------------------
		switch(mes){
		case 1:
			printf("----------------\n");
			printf("Você nasceu dia %d de Janeiro.\n", dia);
			printf("----------------\n");
			break;
		case 2:
			printf("----------------\n");
			printf("Você nasceu dia %d de Feveiro.\n", dia);
			printf("----------------\n");
			break;
		case 3:
			printf("----------------\n");
			printf("Você nasceu dia %d de Março.\n", dia);
			printf("----------------\n");
			break;
		case 4:
			if(dia>30){
				printf("Dia inválido.\n");
				printf("Não existe dia %d Abril\n", dia);
			}else{
			printf("----------------\n");
			printf("Você nasceu dia %d de Abril.\n", dia);
			printf("----------------\n");
			}
			break;
		case 5:
			printf("----------------\n");
			printf("Você nasceu dia %d de Maio.\n", dia);
			printf("----------------\n");
			break;
		case 6:
			if(dia>30){
				printf("Dia inválido.\n");
				printf("Não existe dia %d de Junho.\n", dia);
			}else{
			printf("----------------\n");
			printf("Você nasceu dia %d de Junho.\n", dia);
			printf("----------------\n");
			}
			break;
		case 7:
			printf("----------------\n");
			printf("Você nasceu dia %d de Julho.\n", dia);
			printf("----------------\n");
			break;
		case 8:
			printf("----------------\n");
			printf("Você nasceu dia %d de Agosto.\n", dia);
			printf("----------------\n");
			break;
		case 9:
			if(dia>30){
				printf("Dia inválido.\n");
				printf("Não existe dia %d de Setembro.\n", dia);
			}else{
			printf("----------------\n");
			printf("Você nasceu dia %d de Setembro.\n", dia);
			printf("----------------\n");
			}
			break;
		case 10:
			printf("----------------\n");
			printf("Você nasceu dia %d de Outubro.\n", dia);
			printf("----------------\n");
			break;
		case 11:
			if(dia>30){
				printf("Dia inválido.\n");
				printf("Não existe dia %d de Novembro.\n", dia);
			}else{
			printf("----------------\n");
			printf("Você nasceu dia %d de Novembro.\n", dia);
			printf("----------------\n");
			}
			break;
		case 12:
			printf("----------------\n");
			printf("Você nasceu dia %d de Dezembro.\n", dia);
			printf("----------------\n");
			break;
		default:
			printf("----------------------------------\n");
			printf("Favor informar um valor válido.\n");
			printf("----------------------------------\n");
	}
	//--------------------------------------------
	
	
	
	system("PAUSE");
	return 0;
}
