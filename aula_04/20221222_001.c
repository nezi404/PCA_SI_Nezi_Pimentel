/*
20221222_001. Fazer um programa para calcular a raiz quadrada de um
número positivo usando o roteiro abaixo (baseado no método de
aproximaçõessucessivas de Newton-Raphson). Seja Y o número para o qual se
quer computar a raiz quadrada:
*/

#include <stdio.h>
#include <math.h>

int main(){
	float tes1, tes2, tes_2, num, raiz, power, abs, subi;
	printf("Numero: ");
	scanf("%f", &num);
	tes1 = num/2;
	tes_2 = tes1;
	tes2 = num;
	raiz = true;
	while (raiz == true){
	power = pow(tes_2, 2);
	tes2 = tes_2-((power-num)/(2*tes_2));
	abs = fabs(tes2 - tes1);
		if (abs < 0.1){
		printf("A raiz de %0.f eh %0.f", num, tes2);
		return 0;
		
	}
		
	tes_2 = tes2;
	tes1 = tes2;
	}
}
