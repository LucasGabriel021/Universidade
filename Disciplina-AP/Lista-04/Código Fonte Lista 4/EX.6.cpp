//Elabore um algoritmo que imprima todos os n�meros primos existentes entre N1 e N2, em que
//N1 e N2 s�o n�meros naturais fornecidos pelo usu�rio.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fun�ao principal
int main()
{

//Declara��o de vari�veis
int n1, n2, i = 0;

//�nicio do c�digo
        system("color A");
        setlocale(LC_ALL, "Portuguese");

            printf("Informe o primeiro n�mero:");
            fflush(stdin);
            scanf("%d", &n1);

            printf("Informe o segunco n�mero:");
            fflush(stdin);
            scanf("%d", &n2);

       for(i = n1; i <= n2; i++){
	        if(i % 2 != 0)
	        printf("%d � primo!\n", i);
    }

//Pula linha
            printf("\n\n");
            
//Pause do programa            
	    system("pause");
	    
//Retorno da fun��o	    
	return 0;

}
