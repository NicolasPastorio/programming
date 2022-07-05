#include <stdio.h>
#include <stdlib.h>
//02-n-igual-a-5
int main(){
	//declaração de variáveis
	int n;
	
	//solicitação ao usuário
	printf("Digitem um numero: ");
	scanf("%d", &n);
	
	//condição
	if(n==5)
		printf("Parabens!\n");
	
	
	system("PAUSE");
	return 0;
}
