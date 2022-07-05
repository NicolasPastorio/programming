#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag101-19
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	printf("Favor informar um valor inteiro qualquer: ");
	scanf("%d", &num1);
	printf("Favor informar outro valor inteiro qualquer: ");
	scanf("%d", &num2);
	
	/*este código faz com que os valores sejam inpressos 
	mesmo se os valores forem informados na ordem errada!*/
	if(num1 < num2){
		for(int a = num1; a <= num2; a++){
			if (a % 2 != 0){
				printf("%d\n", a);
			}
		}
	} else if(num1 > num2){
		for(int a = num2; a <= num1; a++){
			if (a % 2 != 0){
				printf("%d\n", a);
			}
		}
	}	else { //num1 == num2
		printf("Os valores são iguais!\n\n");
	}
	
	
	system("Pause");
	return 0;
}
