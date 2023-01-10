/*
20222220004 Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor valor fornecido.
*/
#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1, menoval = 0;
  while (cont < 20){
      cont = cont + 1;
      printf("Numeros inteiros: ");
      scanf("%d", &num1);
      if (num1 > num){
        num = num1;
        
      }
      if (cont==1){
         menoval=num1;
      }
      if (num1 < menoval){
        menoval = num1;  
      }
  }
  
printf("O maoir numero inteiro eh: %d\nO menor numero eh: %d", num, menoval);
  
}

