#include <stdio.h>
#include <math.h>

float numre = 10, numtan  = 2;
 
float perg (){
	while (numre > 0 && numre < 1){
		printf("Insira um numero positivo entre 1 e 0: ");
		scanf("%f", &numre);
		if (numre > 0  && numre < 1){
			printf("Insira um numero valido\n");
		}
}
	return numre;

	}
void imprimir(float imprima){
	printf("o aarcotangente de %f eh %f", numre, imprima);
}

float arctan(){
	int contnum = 1;
	float poten, soma = 1;
	while (numtan > 0.0001 ){
		poten = pow(numre, contnum);
		if (soma == 1){
			numtan += poten/ contnum;
			soma = 0;
		}
		else{
			numtan -= poten/ contnum;
			soma = 1;

		}
		contnum += 2;

	}
	return numtan;
}

int main (){
	perg();
	arctan();
	imprimir(numtan);
	
	
}
