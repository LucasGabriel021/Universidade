//Escreva  um  programa  que  transforme  o  computador  em  uma  urna  eletr�nica  para  elei��o  do  melhor jogador de futebol de todos os tempos. 
//O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona. 
//Cada  voto  ser�  efetivado  pelo  n�mero  do  candidato,  permitindo-se  ainda  o  voto  0  (em  branco)  e qualquer  outro  voto  diferente  dos  especificados  ser�  considerado  nulo.  
//O  eleitor  dever�  sempre  ser consultado  quanto  a  confirma��o  do  voto.  
//Ao  final  da  elei��o  dever�  ser  apresentado  um  relat�rio contendo:
//�Quantidade de votos de cada candidato;
//�Quantidade de votos em branco e nulos;
//�Nome do candidato vencedor (prever possibilidade de empate).

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

//Fun��o principal
int main()
{

//Declara��o das vari�veis
int voto, totalVotos, i, totalMaracoca, totalPele, totalNulo, totalBranco;

totalNulo = 0;
totalVotos = 0;
totalMaracoca = 0;
totalPele = 0;
totalBranco = 0;

//Inicio do c�digo	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	    
	                printf("Para vota��o utilizem os n�meros abaixo para o jogador correspondente: \n\n");
	                printf("Para Pel� digite 25; \n");
	                printf("Para Maradona digite 33; \n");
	                printf("Para voto em branco digite 0; \n");
	                printf("Os votos que n�o corresponderem a nenhum especificado, ser�o transformados em votos nulos\n\n");
	    
	                printf("Informe quantas pessoas compareceram a vota��o para eleger o Rei do Futebol: ");
	                fflush(stdin);
	                scanf("%d", &totalVotos);
	    
	        for (i = 0; i < totalVotos; i++)    
	            {
					    
	                printf("Informe para quem ir� seu voto de acordo com a tabela a cima. ");
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
	                printf("\n\nO Rei leg�timo do futebol foi o Pel�!");
	                
	            else if (totalMaracoca > totalPele)
				    printf("\n\nO Rei leg�timo do futebol foi o Maradona!");
					
				else if (totalMaracoca == totalPele)	
					printf("\n\nO resultado da nossa ele���o foi EMPATE!");    
	    
	                printf("\nEst�tiscas da vota��o logo abaixo: \n");
	                printf("\nQuantidade de votos para o Pel� foi de %d.", totalPele);
	                printf("\nQuantidade de votos para Maradona foi de %d.", totalMaracoca);
	                printf("\nQuantidade de votos em branco foi de %d.", totalBranco); 
	                printf("\nQuantidade de votos nulos foi de %d", totalNulo);
	    
	    
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da fun��o	
	return 0;
}
