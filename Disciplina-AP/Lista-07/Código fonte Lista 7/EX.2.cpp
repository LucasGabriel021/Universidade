//Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que 50). O n�mero de aluno ser� informado pelo usu�rio.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Fun��o principal
int main()
{

//Declra��o de vari�veis
int i, notas[51], totalAluno;

totalAluno = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
            printf("Informe a quantidade de alunos para logo em seguida informar a nota: ");
            fflush(stdin);
            scanf("%d", &totalAluno);
    
            for (i = 0; i < totalAluno; i++)
                {	
                    printf("Informe a %d� nota do %d� aluno: ", i, i, notas[51]); 	
                	fflush(stdin);
                	scanf("%d", &notas[i]);	
				} 
				
			for (i = 0; i < totalAluno; i++)
			        printf("\n\nA nota do %d� foi %d. ", i, notas[i]);	
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}    
