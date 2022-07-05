#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag99-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	
	float alto=0.0, baixo, gordo=0.0, magro;
	int menbro, codalto, codbaixo, codgordo, codmagro;
	
	printf("Favor, informe a quantidade de menbros da academia: ");
	scanf("%d", &menbro);
	printf("obs: use vírgula(,) invez de ponto(.) para valores reais!\n");
	printf("\n");
	
	int code[menbro];
	float altura[menbro], peso[menbro];
	
	for(int a=0; a < menbro; a++){
		printf("Informe o código(três digitos e inteiro) do menbro %d: ", a+1);
		scanf("%d", &code[a]);
		printf("Informe a altura(em metros) do menbro %d: ", a+1);
		scanf("%f", &altura[a]);
		printf("Informe o peso(kg) do menbro %d: ", a+1);
		scanf("%f", &peso[a]);
	}printf("\n\n");
	
	//comparar o primeiro valor com todos os outros do vetor
	for(int a=0; a < menbro; a++){
			//mais alto 
			if(altura[a]>alto){
				alto = altura[a];
				codalto = code[a];
			}
			//mais baixo
			for(int i=0; i<menbro; i++){
				if(altura[a]<altura[i]){
					baixo = altura[a]; 
					codbaixo = code[a];
				}else {
					baixo = altura[i];
					codbaixo = code[i];
				}
			}
			//mais gordo 
			if(peso[a]>gordo){
				gordo = peso[a];
				codgordo = code[a];
			}
			//mais magro
			for(int i=0; i<menbro; i++){
				if(altura[a]<altura[i]){
					magro = altura[a];
					codmagro = code[a];
					 
				}else{
					magro = altura[i];
					codmagro = code[i];
				}		
			}
	}
	printf("\n");
	printf("---------------------------------------------\n");
	printf("O menbro %d é o mais alto com %.2f metros!\n", codalto, alto);
	printf("O menbro %d é o mais baixo com %2.f metros!\n", codbaixo, baixo);
	printf("O menbro %d é o mais gordo com %.2fkg!\n", codgordo, gordo);
	printf("O menbro %d é o mais magro com %.2fkg!\n", codmagro, magro);
	printf("---------------------------------------------\n");
	printf("\n");
	
		
	system("Pause");
	return 0;
}
