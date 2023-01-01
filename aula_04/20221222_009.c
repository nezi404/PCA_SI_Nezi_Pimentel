/*
20221222_009. Calcular os valore de x e y onde a seguinte expressão
xy - x^2 + y tem valor máximo, a partir dos números naturais
n e m tais que x < m e y < n.
*/
#include <stdio.h>

int main(){
	int valor, valormax = 0, x_max = 0, y_max = 0, contx = 0, conty = 0;
	float m, n; 
	printf("Valor para m, sendo que x <=m: ");
	scanf("%f", &m);
	printf("Valor para n, sendo que y <=n: ");
	scanf("%f", &n);
	if (m < 0 || n < 0 || int(m) - m !=0 || int(n) - n !=0  ){
		printf("Somente numeros naturais sao permitidos");
		return 0;
	}
	while (contx < m){
		contx++;
		while (conty < n){
			conty++;
			valor = conty * contx -( contx * contx) + conty;
			if (valor > valormax){
				y_max = conty;
				x_max = contx;
				valormax = valor;
			}
		}
		conty = 0;	

	}
	printf("O valor maximo eh %d e foi obtido em x = %d e y = %d", valormax, x_max, y_max);
	return 0;
}
