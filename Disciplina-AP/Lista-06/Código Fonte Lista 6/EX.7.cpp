//Escreva  um  programa  que  transforme  o  computador  em  uma  urna  eletrônica  para  eleição  do  melhor jogador de futebol de todos os tempos. 
//O número 25 é do candidato Pelé e o 33 do candidato Maradona. 
//Cada  voto  será  efetivado  pelo  número  do  candidato,  permitindo-se  ainda  o  voto  0  (em  branco)  e qualquer  outro  voto  diferente  dos  especificados  será  considerado  nulo.  
//O  eleitor  deverá  sempre  ser consultado  quanto  a  confirmação  do  voto.  
//Ao  final  da  eleição  deverá  ser  apresentado  um  relatório contendo:
//•Quantidade de votos de cada candidato;
//•Quantidade de votos em branco e nulos;
//•Nome do candidato vencedor (prever possibilidade de empate).

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
int voto, totalVotos, i, totalMaracoca, totalPele, totalNulo, totalBranco;

totalNulo = 0;
totalVotos = 0;
totalMaracoca = 0;
totalPele = 0;
totalBranco = 0;

//Inicio do código	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	    
	                printf("Para votação utilizem os números abaixo para o jogador correspondente: \n\n");
	                printf("Para Pelé digite 25; \n");
	                printf("Para Maradona digite 33; \n");
	                printf("Para voto em branco digite 0; \n");
	                printf("Os votos que não corresponderem a nenhum especificado, serão transformados em votos nulos\n\n");
	    
	                printf("Informe quantas pessoas compareceram a votação para eleger o Rei do Futebol: ");
	                fflush(stdin);
	                scanf("%d", &totalVotos);
	    
	        for (i = 0; i < totalVotos; i++)    
	            {
					    
	                printf("Informe para quem irá seu voto de acordo com a tabela a cima. ");
	                fflush(stdin);
	                scanf("%d", &voto);
	    
	            if (voto == 25)
				   	totalPele++;
				   	
				else if (voto == 33)   	
				   	totalMaracoca++;
				   	
				else if (voto == 0)  
	                totalBranco++;
	    
	            else if ((voto != 0) && (voto != 33) && (voto != 25))
	                totalNulo++;
	            }
	    
	            if (totalPele > totalMaracoca)
	                printf("\n\nO Rei legítimo do futebol foi o Pelé!");
	                
	            else if (totalMaracoca > totalPele)
				    printf("\n\nO Rei legítimo do futebol foi o Maradona!");
					
				else if (totalMaracoca == totalPele)	
					printf("\n\nO resultado da nossa ele´ção foi EMPATE!");    
	    
	                printf("\nEstátiscas da votação logo abaixo: \n");
	                printf("\nQuantidade de votos para o Pelé foi de %d.", totalPele);
	                printf("\nQuantidade de votos para Maradona foi de %d.", totalMaracoca);
	                printf("\nQuantidade de votos em branco foi de %d.", totalBranco); 
	                printf("\nQuantidade de votos nulos foi de %d", totalNulo);
	    
	    
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da função	
	return 0;
}
