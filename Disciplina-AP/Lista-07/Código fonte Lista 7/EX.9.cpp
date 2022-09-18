//Faça  um  algoritmo  que  leia  a  idade  de até  100 pessoas  e  apresente  a  média  entre  todas, 
//além  de identificar a mais velha e  a posição em que ela se encontra no vetor. A idade mais velha pode aparecer em mais de uma posição.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Função principal
int main()
{

//Declração de variáveis
int i,  idade[100], maiorIdade, quantidadePessoa, soma;
double media;

media = 0;
quantidadePessoa = 0;
i = 0;
maiorIdade = 0;
soma = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
	
	    printf("Informe a quantidade de pessoas para a verificação: ");
	    fflush(stdin);
	    scanf("%i", &quantidadePessoa);
	
	        for(i = 0; i < quantidadePessoa; i++){
		        printf("Informe a idade da pessoa %iº: ", i+1, idade[100]);
		        fflush(stdin);
		        scanf("%i", &idade[i]);
		        
		            soma = (soma + idade[i]); 
		            
		       if(maiorIdade < idade[i])
			        maiorIdade = idade[i];
	       }
	       
	                media = (soma / quantidadePessoa);
	
	    printf("\nA média das idades é: %.2lf. ", media);
	    printf("\nA maior idade é de %i da pessoa %i. ", maiorIdade, i);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}     
