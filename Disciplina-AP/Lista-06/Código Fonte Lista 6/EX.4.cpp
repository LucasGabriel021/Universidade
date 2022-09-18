//Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um certo per�odo. Fazer um programa que:-leia o n�mero de crian�as nascidas no per�odo;
//-leiaum n�mero indeterminado de linhas com as informa��es das crian�as que morreram, contendo, cada uma, o sexo da crian�a (m -masc., f-fem.) e o n�mero de meses de vida da crian�a. 
//A �ltima linha, que n�o entrar� nos c�lculos, cont�m no lugar do sexo o caractere v (vazio). Determine e escreva:a)porcentagem de crian�as mortas no per�odo;b)porcentagem decrian�as 
//masculinas mortas no per�odo;c)porcentagem de crian�as que viveram 24 meses oumenos no per�odo

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
char sexo;
int numeroNascimento, i, meses, numeroFalecimento, quantidadeHomem, quantidadeCrianca, quantidadeMeses;
float porcentagemHomem, porcentagem, porcentagemMeses;

quantidadeMeses = 0;
porcentagemHomem = 0;
porcentagemMeses = 0;
quantidadeCrianca = 0;
quantidadeHomem = 0;
porcentagem = 0;
numeroNascimento = 0;
numeroFalecimento = 0;
	
//Inicio do c�digo	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	
	                                printf("Informe o n�mero de crian�as nascidas neste per�odo: ");
	                                fflush(stdin);
	                                scanf("%d", &numeroNascimento);
	
	                                printf("Informe o quantitativo que morreram: ");
	                                fflush(stdin);
	                                scanf("%d", &numeroFalecimento);
	                                
	                                porcentagem = (numeroFalecimento / numeroNascimento) * 100;
	                                
	                        for(i = 0; i < numeroFalecimento; i++)
					{
						            printf("Informe o sexo da crian�a (M/F): ");
						            fflush(stdin);
						            scanf("%s", &sexo);
						            sexo = toupper(sexo);
						
						            printf("Quantos meses a crian�a tem desde que nasceu? ");
						            fflush(stdin);
						            scanf("%d", &meses);
						            
						    if (sexo == 'M')
						            quantidadeHomem++;
						            porcentagemHomem = (quantidadeHomem / numeroFalecimento) * 100;						            
						            
						    if (meses <= 24)
						            quantidadeCrianca++;
						            porcentagemMeses = (quantidadeCrianca / numeroFalecimento) * 100;
					}

//Saida das informa��es	
	                                printf("\n\nPorcentagem de crian�as mortas neste per�odo foi de %.1f. ", porcentagem);
                                 	printf("\nPorcentagem de crian�as masculinas mortas neste per�odo foi de %.1f. ", porcentagemHomem);
	                                printf("\nPorcentagem de crian�as que viveram 24 meses ou menos neste per�odo foi de %.1f. ", porcentagemMeses);
	
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da fun��o	
	return 0;
}

