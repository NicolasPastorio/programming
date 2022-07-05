#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag97-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Um número primo é um númer que é apenaz divizível por
      um e por ele mesmo!
	  O numero 2 é o único numero primo que é par*/
	
	int num, primo = 0;
	
	printf("Favor informar um número inteiro maior que zero qualquer: ");
	scanf("%d", &num);
	
	
		if(num == 2 || num % 2 != 0 && num > 2 \\ num != 9)
			printf("O número %d é primo!\n", num);
		else
			printf("O número %d não é primo!\n", num);
			

	system("Pause");
	return 0;
}





