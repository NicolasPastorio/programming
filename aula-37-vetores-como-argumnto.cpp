#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
//aula-37-vetores-como-argumento
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	void funcaoPrint(int x[][3]);
	int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	//-------------------
	funcaoPrint(matriz);
	//-------------------
	
	system("Pause");
	return 0;
}
		//------------------------------
		void funcaoPrint(int x[][3]){
			int i, j;
			for(i = 0; i <3; ++i){
				for(j = 0; j <3; ++j){
					printf("%d  ", x[i][j]);	
				}
				printf("\n");
			}
			
		}
		//------------------------------
