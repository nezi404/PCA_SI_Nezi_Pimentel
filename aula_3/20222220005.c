/*
20222220005 Altere o programa anterior para que ele não permita a entrada de valores negativos.
*/
#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1, menoval = 0;
  while (cont < 20){
      cont = cont + 1;
      printf("Numeros inteiros: ");
      scanf("%d", &num1);
      
      if (num1 < 0) {
          printf("Nao eh permitida a entrada de numeros negativos");
          return 0;
      }
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

