/*
20230105001. Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. 
Encontre o maior entre eles e imprima:
O percentual do menor em relação ao maior
O módulo da diferença entre o maior e o menor
O programa deve utilizar três funções:
a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles 
estejam dentro de um intervalo pré-determinado;
b) percentual: Função para calcular o percentual:  100*valor/total
c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais
*/

#include <stdio.h>
#include <math.h>


int  cont=0, errado = 0;


void percentual(float numeros, float num1_, float menoval_){
	float per, total;
	total =  num1_ + menoval_;
	
	per = 100 * numeros/total;
	printf("Percentual de %0.f : %0.2f\n",numeros, per);
}

float scanIntervalo(float num1_) {
	if (0 >= num1_ || num1_ >= 1000 || int(num1_)- num1_ != 0){
		printf("Numero maior ou igual 1000, ou menor ou igual zero, ou nao inteiro inserido\n");
		cont--;
		errado = 1;
	}		

}



float absdif (float num_, float menoval_){
 	int dif;
 	float modu;
 	dif = num_ - menoval_;
 	modu = fabs(dif);
    printf("Diferenca: %0.f", modu);
}
int main() {
	float menoval, num1, num = 0;
  while (cont < 2){
      cont = cont + 1;
      errado = 0;
      printf("Numeros : ");
      scanf("%f", &num1);
      scanIntervalo(num1);

	  if (num1 > num && errado == 0){
        num = num1;
        
      }
      if (cont==1 && 0 < num1 && errado == 0 ){
         menoval=num1;
      }
      if (num1 < menoval && errado == 0){
        menoval = num1;  
      }

  }	
  	percentual(num, num, menoval);
	percentual(menoval, num, menoval);
    absdif(num, menoval);
	
}
