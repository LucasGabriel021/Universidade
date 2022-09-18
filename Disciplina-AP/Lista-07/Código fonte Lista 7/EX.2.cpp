//Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que 50). O número de aluno será informado pelo usuário.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Função principal
int main()
{

//Declração de variáveis
int i, notas[51], totalAluno;

totalAluno = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
            printf("Informe a quantidade de alunos para logo em seguida informar a nota: ");
            fflush(stdin);
            scanf("%d", &totalAluno);
    
            for (i = 0; i < totalAluno; i++)
                {	
                    printf("Informe a %dº nota do %dº aluno: ", i, i, notas[51]); 	
                	fflush(stdin);
                	scanf("%d", &notas[i]);	
				} 
				
			for (i = 0; i < totalAluno; i++)
			        printf("\n\nA nota do %dº foi %d. ", i, notas[i]);	
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}    
