#include <stdio.h>
#include <stdlib.h>
//1-area-do-trapezio
int main(){
	int h, b, B, Area;
	
	printf("Calculo da area de um trapexio.\n");
	printf("Favor informar a altura: ");
	scanf("%d", &h);
	printf("Favor informar a base menor: ");
	scanf("%d", &b);
	printf("Favor informar a base maior: ");
	scanf("%d", &B);
	
	Area = (h*(b+B))/2;
	
	printf("A area do trapezio e %d.\n", Area);
	
	system("PAUSE");
	return 0;
}
