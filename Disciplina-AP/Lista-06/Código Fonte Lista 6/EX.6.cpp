//Elabore  um  programa  que  identifique  o  n�mero de  algarismos  de  um  valor  inteiro  positivo  informado pelo usu�rio

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

//Fun��o principal
int main()
{

//Declara��o das vari�veis
int numero;

//Inicio do c�digo	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	    
	                printf("Informe um n�mero inteiro positivo: ");
	                fflush(stdin);
	                scanf("%d", &numero);
	    
	                printf("O valor inteiro %d tem um tamanho de: %zu algarismos",numero,sizeof(numero));
	    
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da fun��o	
	return 0;
}
