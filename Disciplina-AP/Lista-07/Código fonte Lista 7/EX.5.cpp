//Fa�a  um  algoritmo  que  leia  um  vetor  de  at�  80  elementos.  Ap�s  a  leitura  de  todos  os  dados,  
//leia  um n�meroe verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, escrever, em uma tela limpa, 
//quantas vezes eles aparecem e quais as posi��es em que eles est�o armazenados no vetor.

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
int elemento[80], i, numero, numeroElemento;

numeroElemento = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

            printf("Informe quantos elementos o senhor(a), deseja verificar? ");
                for (i = 0; i < 80; i++)
                    {
                        fflush(stdin); 
                        scanf("%d", &elemento[i]);	        	
			        }
            
            printf("Informe qual n�mero o senhor(a), deseja verificar? ");
            fflush(stdin);
            scanf("%d", &numero);
      
        system("cls");
      
                if (numero == elemento[i]) 
                    numeroElemento++;
                
            printf("O total de vezes que o n�mero aparece � de %d", numeroElemento);    

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}
