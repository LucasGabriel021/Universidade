//Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados
//tenhamos o valor 7 como resultado da soma dos valores de cada dado.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Função principal 
int main()
{

//Declaração das variáveis	
int dado1, dado2, soma;

dado1 = 0;
dado2 = 0;
soma = 0;
	
//Entrada das informações	
        setlocale(LC_ALL, "Portuguese");	
        system("color A");	
	
                printf("Possibilidades de dois dados para que o resultado seja 7.\n\n");	
	
        for(dado1 = 1; dado1 <= 6; dado1++){
	        for(dado2 = 1; dado2 <= 6; dado2++)
	    if(dado1 + dado2 == 7){
	  	       soma =  dado1 + dado2;
			   printf("- %d + %d = %d\n", dado1, dado2, soma);
	  	
	    }	
    }	
	
//Pula linha	
	           printf("\n\n");
//Pause do programa	           	           
	    system("pause");
	    
//Retorno da função	    
	return 0;
}
