//Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando de 0 a 10, dos alunos de uma turma (vários alunos).
//Calcule a frequênciade cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.

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
int m, i, l = 0, j, quantidadesNotas, notas[80], notasRepetidas[80], frequenciasNotas[80];

quantidadesNotas = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");
	
	    printf("Informe quantas notas serão usadas na verificação: ");
	    fflush(stdin);
	    scanf("%i", &quantidadesNotas);
	
	        for(i = 0; i < quantidadesNotas; i++){
		        do{
			        printf("Informe a nota de |0| a |10|: ", notas[80]);
			        fflush(stdin);
			        scanf("%i", &notas[i]);
			        
		        }while(notas[i] < 0 || notas[i] > 10);	
	        }
	        
	        for(i = 0; i < quantidadesNotas; i++){
		        for(j = 0; j < quantidadesNotas; j++){
			        if(notas[i] == notas[j]){
				        notasRepetidas[l] = notas[i];
				            l++;
				            
				for (m = 0; m < l; m++){
					if (notasRepetidas[m] == notasRepetidas[m + 1]) 
						l--; 
			  	        }
			        }
				
		        }
	        }
	        
	        for(i = 0; i < l; i++){
		            frequenciasNotas[i] = 0;
		            
		        for(j = 0; j < quantidadesNotas;j++){
			        if(notasRepetidas[i] == notas[j]){
				        frequenciasNotas[i] += 1;
			            }
		            }
	            }
	            
	        for(i = 0; i < l; i++)
		        printf("O número de %i que apareceu %i!\n", notasRepetidas[i], frequenciasNotas[i]);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;    
}    
