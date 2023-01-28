#include <stdio.h>

int main(){
	int numlin, numcol, numiti, valor, lin;
	int cont1, cont2;
	printf("Qual o numero de linhas e colunas?? ");
    scanf("%d", &numlin);
    numcol = numlin;
	int mat1[numlin][numcol];
	for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}
	for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("\t%d\t", mat1[cont1][cont2]);
			
			
		}
        printf("\n");
	}
	printf("\nQual o numero de itinerarios? ");
	scanf("%d", &numiti);
	int iti[numiti];
	
	for(cont1 = 0; cont1 < numiti; cont1++){
		printf("Quais sao os itinerarios? ");
		scanf("%d", &iti[cont1]);
		if (iti[cont1] > numlin -1){
			printf("Valor invalido!\n");
			cont1--;
		}
	}
	lin = iti[0];
	for(cont1 = 0; cont1 < numiti -1; cont1++){
		valor += mat1[lin][iti[cont1 +1]];
		lin = iti[cont1 + 1];
	}
	printf("Valor total: %d", valor);
	

}
