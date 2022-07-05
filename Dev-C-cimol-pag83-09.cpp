#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag83-09
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int hora1, hora2, diferenca;
	
	printf("Informe o primeiro horário: ");
	scanf("%d", &hora1);
	printf("Informe o seguno horário: ");
	scanf("%d", &hora2);
	
	diferenca = 360 * (hora2 - hora1);
	
	printf("São %d segundos de %d até %d.\n", diferenca, hora1, hora2);
	
	system("Pause");
	return 0;
}
