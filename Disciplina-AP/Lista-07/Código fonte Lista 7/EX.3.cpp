//Fa�a  um  algoritmo  que  calcule  e  escreva  o  somat�rio  dos  valores  armazenados  numa  vari�vel  composta unidimensional, 
//chamada dados, de at� 100 elementos num�ricos a serem lidos.

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
int dados[100], i, totalNumeros, soma;

soma = 0;
totalNumeros = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
            printf("Informe quantos n�meros o senhor(a), deseja que o programa leia: ");
            fflush(stdin);
            scanf("%d", &totalNumeros);
    
            for (i = 0; i < totalNumeros; i++) 
                {
                	printf("Informe o %d� n�mero. ", i, dados[100]);
                	fflush(stdin);
                	scanf("%d", &dados[i]);
                	
                	soma = (soma + dados[i]);
				}    
    
            printf("\n\nA soma de todos os valores � %d", soma); 
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}    
