//Alterar o algoritmo de ordena��o de caracteres para pesquisar um caractere espec�fico.

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
int quantidadeLetra, i;
char letra[30], letraPesquisada;

quantidadeLetra = 0;
i = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
	    printf("Informe a quantidade de letras: ");
	    fflush(stdin);
	    scanf("%i", &quantidadeLetra);
	
	        for(i = 0; i < quantidadeLetra; i++){
		        printf("Informe a %i� letra: ",i + 1, letra[30]);
		        fflush(stdin);
		        scanf("%s", &letra[i]);
	        }

	    printf("Informe o caracter que voc� deseja encontrar: ");
	    fflush(stdin);
	    scanf("%s", &letraPesquisada);
	
	        for(i = 0; i <= quantidadeLetra; i++){
		        if(letra[i] == letraPesquisada)
		            printf("\nA letra informada est� na posi��o %i�", i);
	        }

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}     
