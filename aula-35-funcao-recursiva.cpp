#include <stdio.h>
#include <stdlib.h>

//aula-35-funcao-recursiva
//===============FUNÇÃO=PRINCIPAL===============
int main(void){
	
	int fatorial(int x);
	int numero, resultado;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	resultado = fatorial(numero);
	
	printf("O fatorial e %d.\n", resultado);
	
	system("pause");
	return 0;
}
//==============================================

		//---------------------------------------------
		int fatorial(int x){
			
			int resultado;
			
			if(x == 0){
				resultado = 1;
			}	else{
				resultado = x * fatorial(x - 1); 
					}
		return resultado;
		}
		//---------------------------------------------
