//Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares do
//n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000,
//apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
//limite de c�lculo foi excedido.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{

int numero, par, i;

i = 0;
numero = 0;
par = 0;

    setlocale(LC_ALL, "Portuguese");
	    system("color A");

            printf("Informe um n�mero par: ");
            fflush(stdin);
            scanf("%d", &numero);

        for(i = numero; i < 200; i++)
        {  
	    if (par = (i % 2 == 0))
            printf("%d\n", i);
        }
            
        system("cls");
            
            printf("O n�mero que voc� digitou %d atinjiu o limite de c�lculo foi excedido.", numero);
            
            printf("\n\n\n");
            
	    system("pause");
	    
	return 0;
}
