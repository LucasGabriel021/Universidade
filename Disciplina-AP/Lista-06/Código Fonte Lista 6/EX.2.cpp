//O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial. O
//fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o
//while.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

int fatorial, n;

fatorial = 0;
n = 5;

    setlocale(LC_ALL, "Portuguese");
	    system("color A");

        while(fatorial == 0)
		{
        	
        fatorial = (n - 1) * n;
        	
        printf("O fatorial de 5 é %d", fatorial);		
        	
		}

            printf("\n\n\n");
            
	    system("pause");
	    
	return 0;
}
