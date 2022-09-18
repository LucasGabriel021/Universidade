//Em uma elei��o presidencial existem quatro candidatos. Os votos s�o informados por c�digo.
//Os dados utilizados para a a��o obedecem � seguinte codifica��o:
//� 1, 2, 3, 4 = voto para os respectivos candidatos;
//� 5 = voto nulo;
//� 6 = voto em branco.
//Elabore um algoritmo que calcule e escreva:
//� O total de votos para cada candidato e seu percentual sobre o total;
//� O total de votos nulos e seu percentual sobre o total;
//� O total de votos em branco e seu percentual sobre o total.
//Como finalizador do conjunto de votos, tem-se o valor 0.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

//Fun�ao principal
int main()
{

//Declara��es de vari�veis
double porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5, porcentagem6;
int numero, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, votoNulo = 0, votoBranco = 0, todosVotos;

//Come�o do c�digo
        setlocale(LC_ALL, "Portuguese");	
        system("color A");

            printf("Voto para o 1� presidente, digite 1.");
            printf("\nVoto para o 2� presidente, digite 2.");
            printf("\nVoto para o 3� presidente, digite 3.");
            printf("\nVoto para o 4� presidente, digite 4.");

            printf("\n\nPara votar nulo, digite 5.");
            printf("\nPara votar em branco, digite 6.\n\n");

        do
        {
	        printf("Digite seu voto de acordo com o menu acima: ");
	        fflush(stdin);
	        scanf("%d", &numero);
	
	    if (numero == 1)
	        voto1++;
	
	    else if (numero == 2)
	        voto2++;
	
	    else if (numero == 3)
	        voto3++;
	
	    else if (numero == 4)
	        voto4++;
	
	    else if (numero == 5)
	        votoNulo++;
	
	    else if (numero == 6)
	        votoBranco++;
	
	        todosVotos = voto1 + voto2 + voto3 + voto4 + votoNulo + votoBranco;
	
	porcentagem1 = (voto1 / todosVotos) * 100;
	porcentagem2 = (voto2 / todosVotos) * 100;
	porcentagem3 = (voto3 / todosVotos) * 100;
	porcentagem4 = (voto4 / todosVotos) * 100;
	porcentagem5 = (votoNulo / todosVotos) * 100;
	porcentagem6 = (votoBranco / todosVotos) * 100;
	
   }while(numero != 0);

            printf("\nO total de votos para o 1� candidato foi %d e a porcentagem foi %.0lf %\n", voto1, porcentagem1);
            printf("O total de votos para o 2� candidato foi %d e a porcentagem foi %.0lf %\n", voto2, porcentagem2); 
            printf("O total de votos para o 3� candidato foi %d e a porcentagem foi %.0lf %\n", voto3, porcentagem3);
            printf("O total de votos para o 4� candidato foi %d e a porcentagem foi %.0lf %\n", voto4, porcentagem4);
            printf("O total de votos para o 5� candidato foi %d e a porcentagem foi %.0lf %\n", votoNulo, porcentagem5);
            printf("O total de votos para o 6� candidato foi %d e a porcentagem foi %.0lf %", votoBranco, porcentagem6);

//Pula linha
            printf("\n\n");
	
//Pause do sistema	
	    system("pause");
	
//Retorno da fun��o	
	return 0;
}
