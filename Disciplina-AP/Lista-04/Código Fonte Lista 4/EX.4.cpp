//Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
//Função principal 
 int main(){
 	
//Declaração das variáveis 	
 int a, b, auxiliar, i, n;

a = 0;

b = 1;

n = 20 ;

//Entrada das informações
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

//Retorno da função
      return 0;
}	
