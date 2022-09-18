//Elabore um algoritmo que imprima todos os números primos existentes entre N1 e N2, em que
//N1 e N2 são números naturais fornecidos pelo usuário.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Funçao principal
int main()
{

//Declaração de variáveis
int n1, n2, i = 0;

//Ínicio do código
        system("color A");
        setlocale(LC_ALL, "Portuguese");

            printf("Informe o primeiro número:");
            fflush(stdin);
            scanf("%d", &n1);

            printf("Informe o segunco número:");
            fflush(stdin);
            scanf("%d", &n2);

       for(i = n1; i <= n2; i++){
	        if(i % 2 != 0)
	        printf("%d é primo!\n", i);
    }

//Pula linha
            printf("\n\n");
            
//Pause do programa            
	    system("pause");
	    
//Retorno da função	    
	return 0;

}
