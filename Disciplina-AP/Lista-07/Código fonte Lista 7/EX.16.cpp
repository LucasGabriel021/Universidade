//Ler um vetor A e B, cada um com 10 elementos. Gerar uma matriz C onde cada elemento corresponde a A + B. Pesquise um dado fornecido pelo usuário no vetor C.

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
int numeroA[10], numeroB[10], soma[10], i, numeroPesquisa;

i = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
	
	    for(i = 0; i < 10; i++){
		    printf("Informe o %iº número A: ", i+1, numeroA[10]);
		    fflush(stdin);
		    scanf("%i", &numeroA[i]);
	    }

            printf("\n\n");

	    for(i = 0; i < 10; i++){
		    printf("Informe o %iº número B: ", i+1, numeroB[10]);
		    fflush(stdin);
		    scanf("%i", &numeroB[i]);
	    }
	        printf("\n\n");
	
	    for(i = 0; i < 10; i++){
		    soma[i] = (numeroA[i] + numeroB[i]);
		    printf("%i + %i = %i\n", numeroA[i], numeroB[i], soma[i]);
	    }
	    
	        printf("Informe um número de soma A + B: ");
	        fflush(stdin);
	        scanf("%i", &numeroPesquisa);

	    for(i = 0; i < 10; i++){
		    if(soma[i] == numeroPesquisa)
			    printf("Número encontrado na posição %i\n", i+1);
	    }
    
//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;    
}      
