//Fazer um algoritmo que leia at� 30caracteres e os ordeneem ordem decrescente. � considerado que A < B < C < ... (ordem alfab�tica).

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
int quantidadeLetra, i, j, troca;
char letra[30];

i = 0;
j = 0;
quantidadeLetra = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

	    printf("Informe a quantidade de letras para in�cio do programa: ");
	    fflush(stdin);
	    scanf("%i", &quantidadeLetra);
	
	        for(i = 0; i < quantidadeLetra; i++){
		        printf("Informe a %i� letra: ", i+1, letra[30]);
		        fflush(stdin);
		        scanf("%s", &letra[i]);	
	        }
	
	        for(i = 0; i < quantidadeLetra; i++){
		        for(j = i + 1; j <= quantidadeLetra; j++){
			        if(letra[i] < letra[j]){
				        troca = letra[j];
				        letra[j] = letra[i];
				        letra[i] = troca;
			        }
		        }
           	}
	
	        for(i = 0; i < quantidadeLetra; i++)
		        printf("%s ", letra[i]);
    
    //Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}
