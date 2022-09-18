//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
//produto e calcule e escreva a identificação e o novo preço após o aumento.
//Considere as seguintes situações:
//b) o mercador informa produto a produto e você deve perguntar se tem mais algum
//poduto a ser calculado o aumento

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração de variáveis
char produto, resposta; 
int i = 0, preco = 0, novoPreco = 0, quantidadeProduto = 0; 

setlocale(LC_ALL, "Portuguese");
        system("color A");

            printf("Quantos produtos o senhor deseja aumentar o preço? ");
            fflush(stdin);
            scanf("%d", &quantidadeProduto);


            for(i = 1; i <= quantidadeProduto; i++)
			{
            	    printf("Informe o ID do produto: ");
                	fflush(stdin);
                	scanf("%s", &produto);
                	
                    printf("Informe o preço desse produto: ");                
				    fflush(stdin);
				    scanf("%d", &preco);
					
					novoPreco = preco * 0.1;
					
					
					printf("O novo preço do produto é R$%d\n", novoPreco);
 
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
                	
                    printf("Informe o preço desse produto: ");                
				    fflush(stdin);
				    scanf("%d", &preco);
					
					novoPreco = novoPreco + (preco * 0.1);
					novoPreco++;
					
					printf("O novo preço do é R$%.2d\n", novoPreco);   
			}

			}
			
			while ((resposta == 'N') || (resposta == 'n'))
			printf("O preço do último produto fornecido pelo mercador é -1");	

//Pula linha
            printf("\n\n");

//Pause do programa
        system("pause");

//Retorno da função
return 0;	
		
}

