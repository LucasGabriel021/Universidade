//Fa�a um algoritmo que leia at� 30 letras e as escreva na ordem inversa (ou contr�ria) da que foram lidas.

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
char letras[30];
int i;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
            for (i = 0; i < 30; i++) 
                {
                	printf("Informe a %d�: ", i + 1, letras[30]);
                	fflush(stdin);
                	scanf("%s", &letras[i]);
					getchar();	
				}
    
            for (i = 30; i >= 0; i--){
                	printf("Ordem inversa:\n %s", letras[i]);}
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}     
