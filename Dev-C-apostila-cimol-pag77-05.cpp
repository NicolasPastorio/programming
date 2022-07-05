#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag77-05
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int hora1, hora2, diferenca;
	
	printf("Insira doi horários: \n");
	printf("Primeiro horário: ");
	scanf("%d", &hora1);
	printf("Segundo horário: ");
	scanf("%d", &hora2);
	
	diferenca = 3600*(hora2 - hora1);
	
	printf("Das %d horas as %d horas tem uma\n", hora1, hora2);
	printf("diferença de %d segundos.\n", diferenca);
	
	system("PAUSE");
	return 0;
}
