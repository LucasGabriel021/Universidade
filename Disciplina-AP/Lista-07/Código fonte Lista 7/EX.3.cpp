//Faça  um  algoritmo  que  calcule  e  escreva  o  somatório  dos  valores  armazenados  numa  variável  composta unidimensional, 
//chamada dados, de até 100 elementos numéricos a serem lidos.

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
int dados[100], i, totalNumeros, soma;

soma = 0;
totalNumeros = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
            printf("Informe quantos números o senhor(a), deseja que o programa leia: ");
            fflush(stdin);
            scanf("%d", &totalNumeros);
    
            for (i = 0; i < totalNumeros; i++) 
                {
                	printf("Informe o %dº número. ", i, dados[100]);
                	fflush(stdin);
                	scanf("%d", &dados[i]);
                	
                	soma = (soma + dados[i]);
				}    
    
            printf("\n\nA soma de todos os valores é %d", soma); 
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}    
