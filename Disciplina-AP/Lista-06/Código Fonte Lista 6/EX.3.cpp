//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de até 10 pessoas. Fazer
//um programa que calcule e escreva: a maior e a menor altura do grupo; a média da altura das mulheres;
//o número de homens. Usar os três comandos de repetição na solução do problema.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

//Declração de variáveis
char sexo;
int i, quantidadeHomem, quantidadeMulher;
float altura, menor, alturaMulher, media, maior;

quantidadeHomem = 0;
quantidadeMulher = 0;
menor = 0;
media = 0;
maior = 0;

    setlocale(LC_ALL, "Portuguese");
	    system("color A");
	    
	        for(i = 1; i <= 10; i++)
			{
				printf("Informe o sexo da %dº pessoa se é |M| ou |F|: ", i);
				fflush(stdin);
				scanf("%s", &sexo);
				
				printf("Informe a altura da %dº pessoa: ", i);
				fflush(stdin);
				scanf("%f", &altura);
				
				if(i == 0)
				    menor = altura;
			    if(menor > altura)
		            menor = altura;
		            i++;
				
				if(i == 0)
				    maior = altura;
			    if(maior < altura)
		            maior = altura;
		            i++;
				
				
				if ((sexo == 'M') && (sexo == 'm'))
				    quantidadeHomem++;
				    
				else if ((sexo == 'f') && (sexo =='F'))    
				    quantidadeMulher++; 
				    alturaMulher++;
				   
				   media = (alturaMulher / quantidadeMulher);
				    
			}

            printf("\n\nA média das mulheres é %.2f ", media);
            printf("\nTotal de homens é %d ", quantidadeHomem);
            printf("\nA menor altura é %.2f ", menor);
            printf("\nA maior altura é %.2f ", maior);

            printf("\n\n\n");
            
	    system("pause");
	    
	return 0;
}
