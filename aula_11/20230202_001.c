
/*20230202_001 Na turma existem 5 equipes, cada equipe está integrada por 4 alunos
 definidos pelo nome e sobrenome do aluno.  Crie um programa que permita armazenar os integrantes 
 das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[100], inserir[] = "s", equi1[8][15], equi2[8][15], equi3[8][15], equi4[8][15], equi5[8][15];
	int equi = 0, comp =0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, ass = 10, achaeq = 0;
	
	while (comp < 20){
		printf("Equipe do aluno: ");
		scanf("%d", &equi);
		if (ass != 0){
		printf("\nNome do aluno:\n ");
		}
		ass = 0;

		if (equi == 1 && ass == 0){
			if (cont1 < 8){
							

			
			scanf("%s %s", equi1[cont1], equi1[cont1 + 1]);
			cont1+=2;
			comp++;
			ass = 1;
			}

		}
		if (equi == 2 && ass == 0){
			
			if (cont2 < 8){
			
			scanf("%s %s", equi2[cont2], equi2[cont2+1]);
			cont2+=2;
			comp++;
			ass = 1;
		}
		}
		if (equi == 3 && ass == 0){
			if (cont3 < 8){
						

			scanf("%s %s", equi3[cont3], equi3[cont3+1]);
			cont3+=2;
			comp++;
			ass = 1;
		}
			
		}
		if (equi == 4 && ass == 0){
			if (cont4 < 8){
						

			scanf("%s %s", equi4[cont4], equi4[cont4+1]);
			cont4+=2;
			comp++;
			ass = 1;
			}
		}
		if (equi == 5 && ass == 0){
			if (cont5 < 8){
							

			
			scanf("%s %s", equi5[cont5], equi5[cont5+1]);
			cont5+=2;
			comp++;
			ass = 1;
	}

		}
		if (ass == 0){
			printf("\nequipe %d cheia\n", equi);
		}
	
	}
	
	comp = 0;
	cont1 = 0;
	cont2 = 0;
	while (strcmp(inserir, "s") == 0){
		printf("\nNome do aluno que deseja achar:\n");
		scanf("%s", nome);
		while (cont1 < 8 ){
			
			if (strcmp(nome, equi1[cont1]) == 0 && achaeq == 0){
				achaeq = 1;	 
				printf("o aluno  esta na equipe %d\n", achaeq);
			}
				if (strcmp(nome, equi2[cont1]) == 0 && achaeq == 0){
				achaeq = 2;	 
				printf("o aluno  esta na equipe %d\n", achaeq);

			}
			if (strcmp(nome, equi3[cont1]) == 0 && achaeq == 0){
				achaeq = 3;	 
				printf("o aluno  esta na equipe %d\n", achaeq);

			}
			if (strcmp(nome, equi4[cont1]) == 0 && achaeq == 0){
				achaeq = 4;	 
				printf("o aluno  esta na equipe %d\n", achaeq);
				
			}
				if (strcmp(nome, equi5[cont1]) == 0 && achaeq == 0){
				achaeq = 5 ;
				printf("o aluno  esta na equipe %d\n", achaeq);	 
			}
			cont1++;
			
	}	
		if (achaeq == 0){
		printf("Aluno nao encontrado\n");
		}
		cont1=0;
		achaeq=0;
		printf("Deseja inserir outro nome?s/n \n");
		scanf("%s", inserir);
		
		}	
		

}
