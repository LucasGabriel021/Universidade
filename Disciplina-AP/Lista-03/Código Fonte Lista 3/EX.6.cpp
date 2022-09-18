//Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média
//das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os
//resultados solicitados quando for fornecida uma nota negativa.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Função principal
int main(){

//Declaração das variáveis
int nota = 0, alunas = 0, alunos = 0, i = 0, totalAlunos = 0, notaF = 0, notaM = 0;
double mediaF = 0, mediaM = 0;
char sexo;

//Entrada de informações
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
                        printf("\nA média das notas das alunas são: %.2lf", mediaF);
                        printf("\nA média das notas das alunos são: %.2lf", mediaM);}

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

//Retorno da função
return 0;

}
