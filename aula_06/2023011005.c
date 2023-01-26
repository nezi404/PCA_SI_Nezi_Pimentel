/*
2023011005. Faça uma função que transforme um número binário (expressado como um inteiro)
num número decimal. A transformação entre essas bases pode ser feita com a forma polinomial a seguir:
Número binário: 1101   ==>  1×2³ + 1×2² + 0x2¹ + 1×2^0 = 8 + 4 + 0 + 1 = 13
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int binar(int binario_, int binariolen_, char bina_[30]){
	int cont = 0, contpo, val, decimal = 0;
	while (cont < binariolen_){
		val = binario_ % 10;
		binario_/= 10;
		contpo = pow(2, cont);
		decimal += val * contpo;
		cont++;
		
	}
	printf("Número binário %s é %d em decimal", bina_, decimal);
	
}

int main(){
	char bina[30];
	int binario, binariolen;
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
	printf("Número binário: ");
	scanf("%s", bina);
	binariolen = strlen(bina);
	binario = atoi(bina);
	
	binar(binario, binariolen, bina);
}
