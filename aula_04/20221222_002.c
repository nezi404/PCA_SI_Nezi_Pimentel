/*
20221222_002. Escreva um programa em C que lê 15 valores reais, encontra 
o maior e o menor deles e mostra o resultado.
*/
#include <stdio.h>

int main() {
  float cont = 0, num = 0, num1, menoval = 0;
  while (cont < 4){
      cont = cont + 1;
      printf("Numeros : ");
      scanf("%f", &num1);
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
  
printf("O maoir numero  eh: %0.2f\nO menor numero eh: %0.2f", num, menoval);
  
}
