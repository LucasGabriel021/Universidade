//Fazer um algoritmo/programa que leia a matricula e o sal�rio dos funcion�rios de uma empresa (m�ximo de 100 funcion�rios).
//Ap�s a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e menor  sal�rio  dos  funcion�rios.
//O  maior  e  menor  sal�rio  dever�o  ser  obtidos,  cada  um,  por  uma  fun��o. Sabe-se ainda que n�o existe matr�cula repetida na empresa.

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
int numeroFuncionario, matricula[100], maior, menor, salario[100];

maior = 0;
menor = 0;	

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");	
 
	            printf("Informe o n�mero de funcion�rios que pertencem a esta empresa: ");
	            fflush(stdin);
	            scanf("%i", &numeroFuncionario);
	
	            for(int i = 0; i < numeroFuncionario; i++)
	                {
		                
			                printf("Informe a matr�cula do %i� funcionario: ", i+1, matricula[100]);
			                fflush(stdin);
			                scanf("%i", &matricula[i]);

		
		                    printf("Informe o sal�rio do %i� funcionario: ", i+1, salario[100]);
		                    fflush(stdin);
		                    scanf("%i", &salario[i]);
		                  
		            if (i == 1)
			                menor = salario[i];
			                
			        else if (menor > salario[i])
				            menor = salario[i];
				            
		            if(maior < salario[i])
			                maior = salario[i];	
				}
	
	system("cls");
	
	for(int i = 1; i <= numeroFuncionario; i++){
		printf("Salario do %i� � %i. \n", matricula[i], salario[i]);
	}
	
	    printf("O menor sal�rio na compara��o �: R$ %i,00. ", menor);
	    printf("\nO menor sal�rio na compara��o �: R$ %i,00. ", maior);
	
	//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
}
