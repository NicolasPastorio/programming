#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-04
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3, media;
	
	printf("Favor imformar as três notas do aluno: \n");
	printf("\n");
	printf("--------------------------------------\n");
	printf("NOTA 1: ");
	scanf("%f", &num1);//7,0
	printf("NOTA 2: ");
	scanf("%f", &num2);//4,0
	printf("NOTA 3: ");
	scanf("%f", &num3);//9,9
	printf("--------------------------------------\n");
	printf("\n");
	
	media = (num1+num2+num3)/3.0;
	
	//-------------------------------------------------------------	
	if(media >= 7.0){
		printf("--------------------------------------\n");
		printf("Parabéns, você foi aprovado!\n");
		printf("Sua nota: %.1f\n", media);
		printf("--------------------------------------\n");
		
	}else {
		printf("--------------------------------------\n");
		printf("Você foi reprovado, estude mais!\n");
		printf("Sua nota: %.1f\n", media);
		printf("--------------------------------------\n");
	}
	//-------------------------------------------------------------
				
	system("PAUSE");
	return 0;
}
