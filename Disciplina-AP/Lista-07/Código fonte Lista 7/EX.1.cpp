//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.

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
int i, notas[31];

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

        for (i = 0; i < 31; i++)   
            {
            	printf("Informe a %d� nota: ", i, notas[31]);
            	fflush(stdin);
            	scanf("%d", &notas[i]);

			}

        for (i = 0; i < 31; i++)
                printf("\nA nota do %d� � %d", i, notas[i]);
			

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}
