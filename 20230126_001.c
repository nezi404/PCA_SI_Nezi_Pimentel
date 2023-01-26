#include <stdio.h>

int main(){
	int mat1[3][5] = {{ 1, 1, 1, 1, 1},{ 1, 1, 1, 1, 1} ,{ 1, 1, 1, 1, 1}}, mat2[3][5] = {{ 1, 1, 1, 1, 1},{ 1, 1, 1, 1, 1} ,{ 1, 1, 1, 1, 1}}, mat3[3][5];
	int cont1, cont2;
	
		for(cont1 = 0; cont1 < 3 ; cont1++){
		for (cont2 = 0; cont2  < 5; cont2++){
			mat3[cont1][cont2]= mat1[cont1][cont2] + mat2[cont1][cont2];
			
		}
	}

		for(cont1 = 0; cont1 < 3; cont1++){
		for (cont2 = 0; cont2  < 5; cont2++){
			printf("%d ", mat3[cont1][cont2]);
			
			
		}
        printf("\n");
	}
	


}
