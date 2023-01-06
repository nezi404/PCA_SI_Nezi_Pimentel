/*
20230105001. Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o maior entre eles e imprima:
O percentual do menor em relação ao maior
O módulo da diferença entre o maior e o menor
O programa deve utilizar três funções:
a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
b) percentual: Função para calcular o percentual:  100*valor/total
c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais
*/

#include <stdio.h>
#include <math.h>

float per, menoval = 0, num1, num = 0, cont = 0,  total = 0, modu;
int  errado = 0;


float percentual(float numeros){
	total =  num1 + menoval;
	per = 100 * numeros/total;
	printf("Percentual de %0.f : %0.2f\n",numeros, per);
}

int scanIntervalo() {
	if (0 >= num1 || num1 >= 1000 || int(num1)- num1 != 0){
		printf("Numero maior ou igual 1000, ou menor ou igual zero, ou nao inteiro inserido\n");
		cont--;
		errado = 1;
	
	}		

}



float absdif (){
 	int dif;
 	dif = num - menoval;
 	modu = fabs(dif);
 	return modu;
}
int main() {
  while (cont < 2){
      cont = cont + 1;
      errado = 0;
      printf("Numeros : ");
      scanf("%f", &num1);
      scanIntervalo();

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
  	percentual(num);
	percentual(menoval);
    absdif();
    printf("Diferenca: %0.f", modu);
	
}
