//Faça  um  algoritmo  que  leia  um  vetor  de  até  80  elementos.  Após  a  leitura  de  todos  os  dados,  
//leia  um númeroe verifique se existem elementos no vetor iguais ao número lido. Se existirem, escrever, em uma tela limpa, 
//quantas vezes eles aparecem e quais as posições em que eles estão armazenados no vetor.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Função principal
int main()
{

//Declração de variáveis
int elemento[80], i, numero, numeroElemento;

numeroElemento = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");

            printf("Informe quantos elementos o senhor(a), deseja verificar? ");
                for (i = 0; i < 80; i++)
                    {
                        fflush(stdin); 
                        scanf("%d", &elemento[i]);	        	
			        }
            
            printf("Informe qual número o senhor(a), deseja verificar? ");
            fflush(stdin);
            scanf("%d", &numero);
      
        system("cls");
      
                if (numero == elemento[i]) 
                    numeroElemento++;
                
            printf("O total de vezes que o número aparece é de %d", numeroElemento);    

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}
