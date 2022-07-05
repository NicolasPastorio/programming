#include <stdio.h>
#include <stdlib.h>
//09-Renda-per-capta
int main(){
	
	int membro1, membro2, membro3, membro4;
	int rendaPercapita;
	
	printf("Favor informar a renda dos 4 membros da familia:\n");
	
	printf("-------------------\n");
	printf("Membro 1: ");
	scanf("%d", &membro1);
	printf("Membro 2: ");
	scanf("%d", &membro2);
	printf("Membro 3: ");
	scanf("%d", &membro3);
	printf("Membro 4: ");
	scanf("%d", &membro4);
	printf("-------------------\n");
	
	rendaPercapita = (membro1+membro2+membro3+membro4)/4;
	
	printf("\n");
	printf("------------------------------------------------------\n");
	printf("\n");
	printf("A renda per capita da familia e R$%d.\n", rendaPercapita);
	printf("\n");
	printf("------------------------------------------------------\n");
	printf("\n");
	
	system("Pause");
	return 0;
}
