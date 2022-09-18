//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.

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
int i, notas[31];

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");

        for (i = 0; i < 31; i++)   
            {
            	printf("Informe a %dº nota: ", i, notas[31]);
            	fflush(stdin);
            	scanf("%d", &notas[i]);

			}

        for (i = 0; i < 31; i++)
                printf("\nA nota do %dº é %d", i, notas[i]);
			

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}
