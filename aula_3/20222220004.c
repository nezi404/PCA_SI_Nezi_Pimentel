
#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1, menoval;
  while (cont < 5){
      cont = cont + 1;
      printf("Numeros inteiros: ");
      scanf("%d", &num1);
      if (num1 > num){
        num = num1;
      }
      if (num1 < num){
        menoval = num1;  
      }
  }
  
printf("O maoir numero inteiro eh: %d\nO menor numero eh: %d", num, menoval);
  
}
