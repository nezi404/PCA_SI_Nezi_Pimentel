#include <stdio.h>

int main(){
float salario, novo_salario;
  printf("Qual eh seu salario? R$");
  scanf("%f", &salario);
  novo_salario = (salario*0.1)+ salario;
  printf("Seu novo salario eh R$%0.2f", novo_salario);
}
