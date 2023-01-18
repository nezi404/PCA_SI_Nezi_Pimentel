#include <stdio.h>
#include <math.h>

float numre = 2, numtan  = 0;
 
float perg (){
	while (numre < 0 || numre > 1){
		printf("Insira um numero positivo entre 1 e 0: ");
		scanf("%f", &numre);
		if (numre < 0  || numre > 1){
			printf("Insira um numero valido\n");
		}
}
	return numre;

	}
void imprimir(float imprima){
	printf("o arcotangente de %f eh aproximadamente %f", numre, imprima);
}

float arctan(){
	float poten , soma = 1, absol = numre, contnum = 1, casoum=0, casoumcont=0;
	numtan = 0;
	if (numre == 1){
		// a condicao não funcionou pra quando se quer a arctan de 1, nao consegui identificar o erro
		
		printf("pi eh dividido por 4, que resulta em aproximadamente 0,785");
	}
	
	else{
	
	while (poten > 0.0001   ){

		poten = pow(numre, contnum);
		if (soma == 1){
			numtan += poten/ contnum;
			soma = 0;
		}
		else{
			numtan -= poten/ contnum;
			soma = 1;

		}
		contnum = contnum + 2;
		absol = fabs(poten);
	}
}
	return numtan;
}

int main (){
	perg();
	arctan();
	imprimir(numtan);
	
	
}
