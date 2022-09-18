//Alterar o algoritmo de ordenação de caracteres para pesquisar um caractere específico.

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
int quantidadeLetra, i;
char letra[30], letraPesquisada;

quantidadeLetra = 0;
i = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
    
	    printf("Informe a quantidade de letras: ");
	    fflush(stdin);
	    scanf("%i", &quantidadeLetra);
	
	        for(i = 0; i < quantidadeLetra; i++){
		        printf("Informe a %iº letra: ",i + 1, letra[30]);
		        fflush(stdin);
		        scanf("%s", &letra[i]);
	        }

	    printf("Informe o caracter que você deseja encontrar: ");
	    fflush(stdin);
	    scanf("%s", &letraPesquisada);
	
	        for(i = 0; i <= quantidadeLetra; i++){
		        if(letra[i] == letraPesquisada)
		            printf("\nA letra informada está na posição %iº", i);
	        }

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}     
