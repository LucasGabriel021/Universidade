//Fa�a  um  algoritmo  que  leia  a  idade  de at�  100 pessoas  e  apresente  a  m�dia  entre  todas, 
//al�m  de identificar a mais velha e  a posi��o em que ela se encontra no vetor. A idade mais velha pode aparecer em mais de uma posi��o.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Fun��o principal
int main()
{

//Declra��o de vari�veis
int i,  idade[100], maiorIdade, quantidadePessoa, soma;
double media;

media = 0;
quantidadePessoa = 0;
i = 0;
maiorIdade = 0;
soma = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");
	
	    printf("Informe a quantidade de pessoas para a verifica��o: ");
	    fflush(stdin);
	    scanf("%i", &quantidadePessoa);
	
	        for(i = 0; i < quantidadePessoa; i++){
		        printf("Informe a idade da pessoa %i�: ", i+1, idade[100]);
		        fflush(stdin);
		        scanf("%i", &idade[i]);
		        
		            soma = (soma + idade[i]); 
		            
		       if(maiorIdade < idade[i])
			        maiorIdade = idade[i];
	       }
	       
	                media = (soma / quantidadePessoa);
	
	    printf("\nA m�dia das idades �: %.2lf. ", media);
	    printf("\nA maior idade � de %i da pessoa %i. ", maiorIdade, i);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}     
