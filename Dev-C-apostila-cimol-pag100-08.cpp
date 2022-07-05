#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-08
//exibir raíz quadrada do valor informado
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int num, a, raiz;
	
	printf("Favor informar um valor inteiro: ");
	scanf("%d", &num);
	//raíz quadrada só aceita números maiores que zero
	/*só possuem raíz quadrada valores que são quadrado perfeito
	 e um valor sera quadrado perfeito se ele for um número inteiro
	 e seu quadrado gerar uotro número inteiro*/
	if (num > 0){
		for(int a = 0; ; a++){
			if(a > num){
				printf("O valor informado não possue uma raíz exata!\n");				
				break;
			}
			if (a * a == num){//caso a < num
				raiz = a;
				printf("A raíz quadrada de %d é %d\n", num, raiz);
				break;	
			}	
		}
	} else {
		printf("Não será possível fazer o cálculo pois,\n"
			   "nennhum produto de fatores dará como resultado\n"
			   "um número negativo!\n"); 
	}
	
	system("Pause");
	return 0;
}
