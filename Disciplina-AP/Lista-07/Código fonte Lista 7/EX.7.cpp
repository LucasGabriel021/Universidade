//Desenvolva  um  algoritmo  que  cadastre  os  preços  de  até  100  diferentes  CDs  em  uma  loja.
//Após  este cadastro,  o  algoritmo  deverá  possibilitar  a  execução  de  uma  de  duas  funções  para  aumento  dos  preços cadastrados,
//sendo  a  primeira  de  10%  para  todos  os  CDs,  enquanto  a  segunda  aumenta  o  percentual informado  pelo  vendedor  para  todos  os  CDs.
//Será  o  vendedor  que  escolherá  o  tipo  de  aumento  desejado. Após os cálculos deverá ser apresentado o percentual de aumento e, para cada CD,
//o valor sem aumento e o valor com aumento

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Função principal
int main()
{
	
//Declração de variáveis
int i, quantidadeCds, numero, precoCds[100];
double  precoFinal[100], percentual;	
	
i = 0;
numero = 0;
quantidadeCds = 0;	

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");

	printf("Quantos CDs tem na loja? ");
	fflush(stdin);
	scanf("%d", &quantidadeCds);
	
	    for(i = 0; i < quantidadeCds; i++){
		    printf("Qual o valor do %iº CD: ", i+1, precoCds[100]);
		    fflush(stdin);
		    scanf("%i", &precoCds[i]);
	    }
	
	            printf("\nESCOLHA A OPÇÃO DESEJADA!\n");
	            printf(" 1 - Pra aumentar em 10 porcento o valor! \n");
	            printf(" 2 - Para aumentar de acordo com o porcentual informado! \n");
	            
	            printf("\n Qual opção: ");
	            fflush(stdin);
	            scanf("%i", &numero);
	            
	    switch(numero){
	    	
		    case 1: 
		        for(i = 0; i < quantidadeCds; i++)
			        precoFinal[i] = (precoCds[i] * (1 + 0.1));
		    break;
		
		    case 2:
			        printf("Informe o valor percentual: ");
			        fflush(stdin);
			        scanf("%lf", &percentual);
			        
		        for(i = 0; i < quantidadeCds; i++)
			        precoFinal[i] = (precoCds[i] * (1 + (percentual / 100)));
		    break;
		    
	        default:
                    printf("\nOpção invalida!!!");
    }
    
	for(i = 0; i < quantidadeCds; i++){
		if(numero == 1)
		printf("O valor de aumento percentual foi 10 por cento\n");
			
		else{
		printf("O valor de aumento percentual foi %.2lf\n", percentual);		
		printf("O valor sem aumento era: %.2i\n", precoCds[i]);
		printf("O valor com aumento: %.2lf\n", precoFinal[i]);
	    }
		
	}

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}     
