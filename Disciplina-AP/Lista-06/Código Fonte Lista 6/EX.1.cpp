//Elabore um programa em C que solicite um valor ao usuário e imprima todos os números pares do
//número fornecido até 2000, em uma janela de execução. Caso o valor informado seja maior que 2000,
//apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
//limite de cálculo foi excedido.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

int numero, par, i;

i = 0;
numero = 0;
par = 0;

    setlocale(LC_ALL, "Portuguese");
	    system("color A");

            printf("Informe um número par: ");
            fflush(stdin);
            scanf("%d", &numero);

        for(i = numero; i < 200; i++)
        {  
	    if (par = (i % 2 == 0))
            printf("%d\n", i);
        }
            
        system("cls");
            
            printf("O número que você digitou %d atinjiu o limite de cálculo foi excedido.", numero);
            
            printf("\n\n\n");
            
	    system("pause");
	    
	return 0;
}
