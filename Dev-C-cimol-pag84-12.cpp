#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag84-12
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
 	
 	//declaração de variáveis
 	float a, b, c, delta;
 	
 	//------------------cabeçalho-------------------
 	printf("\n");
 	printf("-----------------------------------\n");
 	printf("      FUNÇÃO DO SEGUNDO GRAU\n");
 	printf("----------------------------------\n");
 	printf("\n");
 	//----------------------------------------------
	
	//---------------guarda-valores-----------------
 	printf("\n");
	printf("----------------------------------\n");
	printf("Favor informe o valor para a, b e c \n");
	printf("para a formula = ax(2) +bx +c\n");
	printf("sendo a  diferente de zero!\n");
	printf("valor de a: ");
	scanf("%f", &a);
	if(a = 0){
		printf("\n");
		printf("----------------------------------\n");
		printf("A equação não é do segundo grau!\n");
		printf("----------------------------------\n");
		printf("\n");
	} else {
			printf("valor de b: ");
			scanf("%f", &b);
			printf("valor de c: ");
			scanf("%f", &c);
			printf("----------------------------------\n");
		 	printf("\n");
		 	
		 	delta = (b*b)-(4*a*c);
		 	
		 	if(delta < 0){
		 		printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equação não possue raízes reais!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 } else if(delta = 0){
				printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equação possue apenas uma raíze real!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 } else{//delta > 0
			 	printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equação possue duas raízes reais!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 }
				
		}
	//----------------------------------------------
 	
	system("Pause");
	return 0;
}
