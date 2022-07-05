#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag77-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c;
	
	printf("-------------\n");
	printf("Triângulo\n");
	printf("-------------\n");
	printf("Favor, informe os três lados do trianglo\n");
	
	printf("-------------\n");
	printf("Primeiro lado: ");
	scanf("%d", &a);
	printf("Segundo lado: ");
	scanf("%d", &b);
	printf("Terceiro lado: ");
	scanf("%d", &c);
	printf("-------------\n");
	
	if(a != 0 && b != 0 && c != 0){//condicão 1 do triângulo
		if(a+b >= c && a+c >= b && b+c >= a){//condicão 2 do triângulo
			if(a == b && a == c && b == c){
				printf("O triângulo a = %d, b = %d, c = %d é equilátero,\n", a, b, c);
				printf("Pois possue os três lados iguais!");
			}
			if(a==b || a==c || b==c){
				printf("O triângulo a = %d, b = %d, c = %d é isósceles,\n", a, b, c);
				printf("Pois possue os dois lados iguais!");
			}
			if(a!=b && a!=c && b!=c){
				printf("O triângulo a = %d, b = %d, c = %d é escaleno,\n", a, b, c);
				printf("Pois nenhum dos seus lados são iguais!");
			}
		}else//não satisfaz as condições para ser um triângulo
		printf("Com os valores dados não se pode formar um triângulo!\n");
	}else//não satisfaz as condições para ser um triângulo
		printf("Com os valores dados não se pode formar um triângulo!\n");
		
		
		
	system("PAUSE");
	return 0;
}
