//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes
//algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada
//produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento.
//Considere as seguintes situa��es:
//b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum
//poduto a ser calculado o aumento

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Fun��o principal
int main(){
	
//Declara��o de vari�veis
char produto, resposta; 
int i = 0, preco = 0, novoPreco = 0, quantidadeProduto = 0; 

setlocale(LC_ALL, "Portuguese");
        system("color A");

            printf("Quantos produtos o senhor deseja aumentar o pre�o? ");
            fflush(stdin);
            scanf("%d", &quantidadeProduto);


            for(i = 1; i <= quantidadeProduto; i++)
			{
            	    printf("Informe o ID do produto: ");
                	fflush(stdin);
                	scanf("%s", &produto);
                	
                    printf("Informe o pre�o desse produto: ");                
				    fflush(stdin);
				    scanf("%d", &preco);
					
					novoPreco = preco * 0.1;
					
					
					printf("O novo pre�o do produto � R$%d\n", novoPreco);
 
			}
			
			printf("\n\nDeseja informar outro produto? |S| ou |N|");
			fflush(stdin);
			scanf("%s", &resposta);
			
			while ((resposta == 'S') || (resposta == 's'))
			{
				for(i = 1; i <= quantidadeProduto; i++)
			{
            	    printf("Informe o ID do produto: ");
                	fflush(stdin);
                	scanf("%s", &produto);
                	
                    printf("Informe o pre�o desse produto: ");                
				    fflush(stdin);
				    scanf("%d", &preco);
					
					novoPreco = novoPreco + (preco * 0.1);
					novoPreco++;
					
					printf("O novo pre�o do � R$%.2d\n", novoPreco);   
			}

			}
			
			while ((resposta == 'N') || (resposta == 'n'))
			printf("O pre�o do �ltimo produto fornecido pelo mercador � -1");	

//Pula linha
            printf("\n\n");

//Pause do programa
        system("pause");

//Retorno da fun��o
return 0;	
		
}

