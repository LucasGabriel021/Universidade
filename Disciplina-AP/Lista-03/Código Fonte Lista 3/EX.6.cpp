//Fa�a um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a m�dia
//das notas dos alunos e a m�dia das notas das alunas. O algoritmo dever� apresentar os
//resultados solicitados quando for fornecida uma nota negativa.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Fun��o principal
int main(){

//Declara��o das vari�veis
int nota = 0, alunas = 0, alunos = 0, i = 0, totalAlunos = 0, notaF = 0, notaM = 0;
double mediaF = 0, mediaM = 0;
char sexo;

//Entrada de informa��es
system("color A");
        setlocale(LC_ALL, "Portuguese");


                        printf("Informe quantos alunos tem na sala de aula:");
                        fflush(stdin);
                        scanf("%d", &totalAlunos);

            for(i = 1; i <= totalAlunos; i++)
		{

                        printf("\nInforme o sexo dos aluno (M/F):");
                        fflush(stdin);
                        scanf("%s", &sexo);
    
                        printf("Informe a nota:");
                        fflush(stdin);
                        scanf("%d", &nota);

                if (nota < 0){
                        printf("\nA m�dia das notas das alunas s�o: %.2lf", mediaF);
                        printf("\nA m�dia das notas das alunos s�o: %.2lf", mediaM);}

                if ((sexo == 'M') || (sexo == 'm'))
                    alunos++;

                if ((sexo == 'M') || (sexo == 'm'))
                    notaM++;

                else if ((sexo == 'f') || (sexo == 'F'))
                    alunas++;


                else if ((sexo == 'f') || (sexo == 'F'))
                    notaF++;

            mediaF = (notaF / totalAlunos);
            mediaM = (notaM / totalAlunos);
        }

//Pula linha
                printf("\n\n");

//Pause do programa
            system("pause");

//Retorno da fun��o
return 0;

}
