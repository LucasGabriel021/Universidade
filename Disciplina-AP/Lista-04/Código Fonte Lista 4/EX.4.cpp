//Construa um algoritmo que apresente os 20 primeiros termos da s�rie de Fibonacci.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
//Fun��o principal 
 int main(){
 	
//Declara��o das vari�veis 	
 int a, b, auxiliar, i, n;

a = 0;

b = 1;

n = 20 ;

//Entrada das informa��es
      setlocale(LC_ALL, "Portuguese");
      system("color A");

             printf("Serie de Fibonacci:\n\n");
             printf("- %d\n", b);

         for(i = 0; i < n; i++)
    {
      auxiliar = a + b;

      a = b;

      b = auxiliar;

             printf("- %d\n", auxiliar);
    }

//Puls linha
             printf("\n\n");

//Pause do programa
         system("pause");

//Retorno da fun��o
      return 0;
}	
