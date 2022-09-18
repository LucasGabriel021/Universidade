//Elabore  um  programa  que  identifique  o  número de  algarismos  de  um  valor  inteiro  positivo  informado pelo usuário

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

//Função principal
int main()
{

//Declaração das variáveis
int numero;

//Inicio do código	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	    
	                printf("Informe um número inteiro positivo: ");
	                fflush(stdin);
	                scanf("%d", &numero);
	    
	                printf("O valor inteiro %d tem um tamanho de: %zu algarismos",numero,sizeof(numero));
	    
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da função	
	return 0;
}
