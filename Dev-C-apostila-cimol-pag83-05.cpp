#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-05
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int mes;
	
	printf("Favor, informe o núlero do mes atual: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			printf("----------------\n");
			printf("Janeiro.\n");
			printf("----------------\n");
			break;
		case 2:
			printf("----------------\n");
			printf("Feveiro.\n");
			printf("----------------\n");
			break;
		case 3:
			printf("----------------\n");
			printf("Março.\n");
			printf("----------------\n");
			break;
		case 4:
			printf("----------------\n");
			printf("Abril.\n");
			printf("----------------\n");
			break;
		case 5:
			printf("----------------\n");
			printf("Maio.\n");
			printf("----------------\n");
			break;
		case 6:
			printf("----------------\n");
			printf("Junho.\n");
			printf("----------------\n");
			break;
		case 7:
			printf("----------------\n");
			printf("Julho.\n");
			printf("----------------\n");
			break;
		case 8:
			printf("----------------\n");
			printf("Agosto.\n");
			printf("----------------\n");
			break;
		case 9:
			printf("----------------\n");
			printf("Setembro.\n");
			printf("----------------\n");
			break;
		case 10:
			printf("----------------\n");
			printf("Outubro.\n");
			printf("----------------\n");
			break;
		case 11:
			printf("----------------\n");
			printf("Novembro.\n");
			printf("----------------\n");
			break;
		case 12:
			printf("----------------\n");
			printf("Dezembro.\n");
			printf("----------------\n");
			break;
		default:
			printf("----------------------------------\n");
			printf("Fvavor informar um valor válido.\n");
			printf("----------------------------------\n");
	}
	
						
	system("PAUSE");
	return 0;
}
