#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-17
/*contegem crescente: não importa a ordem que 
os numeros sejam informados. ex: digitou 1 e 5
o programa conta de 1 a 5 e se digitou 5 e 1
o programa conta de 1 a 5*/
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	printf("Favor informar um valor inteiro qualquer: ");
	scanf("%d", &num1);
	printf("Favor informar outro valor inteiro qualquer: ");
	scanf("%d", &num2);
	
	
	if(num1 < num2){
		for(int a = num1; a <= num2; a++){
			printf("%d\n", a);
		}
	} else if(num1 > num2){
		for(int a = num2; a <= num1; a++){
			printf("%d\n", a);
		}
	}	else { //num1 == num2
		printf("Os valores são iguais!\n\n");
	}
	
	
	system("Pause");
	return 0;
}
