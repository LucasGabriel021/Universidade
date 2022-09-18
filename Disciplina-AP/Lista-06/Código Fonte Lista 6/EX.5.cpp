//Uma  companhia  de  teatro  planeja  dar  uma  série de  espetáculos.  
//A  direção  calcula  que  a  R$15,00  o ingresso, serão vendidos 120 ingressos, e as despesas montarão R$600,00. 
//A uma diminuição de R$3,00 nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. 
//Fazer um programa que escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-o variar de R$15,00 a R$3,00  de  3  em  3  reais.  
//Escreva,  ainda,  o  lucro  máximo  esperado,  o  preço  e  o  número  de  ingressos correspondentes

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

//Função principal
int main()
{

//Declaração das variáveis
int valor, lucro;

lucro = 0;
valor = 0;

//Inicio do código	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");

   	                    printf("Valores dos ingressos logo abaixo: \n");
	                    printf("R$ 15,00\n");
	                    printf("R$ 13,00\n\n");
	                    
	                    printf("\nInforme o valor do ingresso por favor: ");
	                    fflush(stdin);
	 	                scanf("%d",&valor);
	 	            
//Saida das informações			 
                if(valor==15)
				{
				  
	                lucro = 15*120;
	                
	                    printf("\n\nValores das despesas: R$ 600,00");
	                    printf("\nValor do faturamento: R$ %d",lucro);
	                    printf("\nLucro esperado: R$ 1.200,00");
	            }
	            
                else if(valor==13)
				{
	
	                lucro = 13*146;
	                   
	                    printf("\n\nValores das despesas: R$ 600,00");
	                    printf("\nValor do faturamento: R$ %d",lucro);
	                    printf("\nLucro esperado: R$ 1.298,00");
                }

//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da função	
	return 0;
}
