#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag82-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");

	int codigo;

	printf("Favor, insira o código do produto: ");
	scanf("%d", &codigo);

	switch   (codigo){
		case 1:
			printf("-----------\n");
			printf("Caderno.\n");
			printf("-----------\n");
			break;
		case 2:
			printf("-----------\n");
			printf("Lápis.\n");
			printf("-----------\n");
			break;
		case 3:
			printf("-----------\n");
			printf("Borracha.\n");
			printf("-----------\n");
			break;
		default :
			printf("-----------\n");
			printf("Diversos.\n");
			printf("-----------\n");
	}

	system("PAUSE");
	return 0;
}
