//Fazer um algoritmo que:
//a) leia uma frase de at� 80 caracteres, incluindo os brancos
//b) conte quantos caracteres em branco existem na frase
//c) conte quantas vezes a letra �a� ou �A� aparece
//d) conte quantas vezes ocorre um mesmo par de letras na frase e quais s�o elas;
//e) apresente o que foi calculado nos itens b, ce d

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Fun��o principal
int main()
{

//Declra��o de vari�veis
char frase[80], par[2], par2[2], parQueMaisSeRepetiu[2];
int caracteresBrancos, caracteresA, caracteresa, i, fraseTamanho, j, quantidadeRepetiu, quantidadeMaisRepetiu, quantidadeVezesRepetiu, quantidadeDoQueMaisSeRepetiu;

quantidadeRepetiu = 0;
quantidadeMaisRepetiu = 0;
j = 0;
i = 0;
caracteresBrancos = 0;
caracteresA = 0;
caracteresa = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

	    printf("Informe uma frase de at� no m�ximo 80 letras: ");
	    fflush(stdin);
	    gets(frase);
	    
       fraseTamanho = strlen(frase);
	   printf("Tamanho da frase: %i\n\n", fraseTamanho);
	   
	        for(i = 0; i < fraseTamanho; i++){
		        switch(frase[i]){
		        	
			        case ' ': caracteresBrancos++; break;
			        case 'A': caracteresA++; break;
			        case 'B': caracteresa++; break;
		        }
	        } 
	        
	        for(i = 0; i < fraseTamanho; i++){
		        quantidadeRepetiu = 0;
		        par[0] = frase[i];
		        par[1] = frase[i+1];
		        
		    for(int j = 0; j < fraseTamanho; j++){
			    par2[0] = frase[j];
			    par2[1] = frase[j+1];
			    
			    if(par[0] == par2 [0] && par[1] == par2[1]) quantidadeRepetiu++;
		    }
		    
		        if(quantidadeRepetiu > quantidadeMaisRepetiu) {
			        quantidadeMaisRepetiu = quantidadeVezesRepetiu;
			        strcpy(parQueMaisSeRepetiu, par);
		        }
	       }
	       
	printf("Existem abaixo:\n");
	printf("%i espa�os em branco\n", caracteresBrancos);
	printf("%i caracteres 'A'\n", caracteresA);
	printf("%i caracteres 'a'\n", caracteresa);
	printf("Letra mais repetida foi: %s%s\n", parQueMaisSeRepetiu[0], parQueMaisSeRepetiu[1]);
	printf("Par que repetiu %i vezes", quantidadeDoQueMaisSeRepetiu);        

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;    
}    
