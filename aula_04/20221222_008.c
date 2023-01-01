/*
20221222_008. A partir de um número inteiro positivo n. Determinar os
inteiros entre 1 e n que são comprimento da hipotenusa de um triângulo
retângulo com catetos inteiros.
*/
#include <stdio.h>
#include <math.h>
int main(){
	int conta, contb= 0;
	float  catquara = 0, squaa = 0, squab = 0, n;
	printf("Numero inteiro positivo: ");
	scanf("%f", &n);
	if ((n == 0) || (int(n)-n != 0) || (n <= 0)){
		printf("Nao eh permitido a entrada de numero negativo, nao inteiro ou igual a zero.");
		return 0;
	}	
	while (contb <= conta ){	
		conta= 1;
		contb++;
		catquara = 0;
		while (catquara < n){
			squaa = pow(conta, 2);
			squab = pow(contb, 2);
			catquara= sqrt(squaa + squab);
			if (int(catquara) - catquara == 0 && conta > contb){
				printf("Hipotenusa: %0.f\t Cateto \"a\": %d e Cateto \"b\": %d \n\n", catquara, conta, contb);
			
				
		}	
		
			conta++;
			}
		}
		return 0;
}

	
