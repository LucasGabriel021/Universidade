//Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um programa que:-leia o número de crianças nascidas no período;
//-leiaum número indeterminado de linhas com as informações das crianças que morreram, contendo, cada uma, o sexo da criança (m -masc., f-fem.) e o número de meses de vida da criança. 
//A última linha, que não entrará nos cálculos, contém no lugar do sexo o caractere v (vazio). Determine e escreva:a)porcentagem de crianças mortas no período;b)porcentagem decrianças 
//masculinas mortas no período;c)porcentagem de crianças que viveram 24 meses oumenos no período

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
	
//Inicio do código	
	setlocale(LC_ALL, "Portuguese");
	    system("color A");
	
	                                printf("Informe o número de crianças nascidas neste período: ");
	                                fflush(stdin);
	                                scanf("%d", &numeroNascimento);
	
	                                printf("Informe o quantitativo que morreram: ");
	                                fflush(stdin);
	                                scanf("%d", &numeroFalecimento);
	                                
	                                porcentagem = (numeroFalecimento / numeroNascimento) * 100;
	                                
	                        for(i = 0; i < numeroFalecimento; i++)
					{
						            printf("Informe o sexo da criança (M/F): ");
						            fflush(stdin);
						            scanf("%s", &sexo);
						            sexo = toupper(sexo);
						
						            printf("Quantos meses a criança tem desde que nasceu? ");
						            fflush(stdin);
						            scanf("%d", &meses);
						            
						    if (sexo == 'M')
						            quantidadeHomem++;
						            porcentagemHomem = (quantidadeHomem / numeroFalecimento) * 100;						            
						            
						    if (meses <= 24)
						            quantidadeCrianca++;
						            porcentagemMeses = (quantidadeCrianca / numeroFalecimento) * 100;
					}

//Saida das informações	
	                                printf("\n\nPorcentagem de crianças mortas neste período foi de %.1f. ", porcentagem);
                                 	printf("\nPorcentagem de crianças masculinas mortas neste período foi de %.1f. ", porcentagemHomem);
	                                printf("\nPorcentagem de crianças que viveram 24 meses ou menos neste período foi de %.1f. ", porcentagemMeses);
	
//Pula linha	
	                printf("\n\n");

//Pause do programa	
         system("pause");	
	
//Retorno da função	
	return 0;
}

