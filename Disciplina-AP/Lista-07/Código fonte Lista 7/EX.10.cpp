//Escrever  um  algoritmo  que  solicite  e  leia  letra  por  letra  o  nome  completo  de  uma  pessoa.
//O  caractere sustenido �#� indica o fim do nome. Depois de l�-lo apresente todo o nome informado, sem o #.

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
char nome[100], letra;
int quantidadeLetras, i, j;

i = 0;
j = 0;
quantidadeLetras = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

	    printf("Digite jogo da velha(#), quando o nome acabar.\n");
	    	    
	        for(int i = 0; i < 100; i++){
		        printf("Digite a %i� letra do nome: ", 1+i);
		        fflush(stdin);
		        scanf("%s", &letra);

		        if(letra == '#') break;
		        
		        else{
			        nome[i] = letra;
			        quantidadeLetras++;
		        }
	       }

	    printf("\n\n");
	    
	        for(j = 0; j < quantidadeLetras; j++)
		        printf("%s", nome[j]);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}     
