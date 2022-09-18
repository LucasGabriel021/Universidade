//Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa (máximo de 100 funcionários).
//Após a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e menor  salário  dos  funcionários.
//O  maior  e  menor  salário  deverão  ser  obtidos,  cada  um,  por  uma  função. Sabe-se ainda que não existe matrícula repetida na empresa.

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
int numeroFuncionario, matricula[100], maior, menor, salario[100];

maior = 0;
menor = 0;	

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");	
 
	            printf("Informe o número de funcionários que pertencem a esta empresa: ");
	            fflush(stdin);
	            scanf("%i", &numeroFuncionario);
	
	            for(int i = 0; i < numeroFuncionario; i++)
	                {
		                
			                printf("Informe a matrícula do %iº funcionario: ", i+1, matricula[100]);
			                fflush(stdin);
			                scanf("%i", &matricula[i]);

		
		                    printf("Informe o salário do %iº funcionario: ", i+1, salario[100]);
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
		printf("Salario do %iº é %i. \n", matricula[i], salario[i]);
	}
	
	    printf("O menor salário na comparação é: R$ %i,00. ", menor);
	    printf("\nO menor salário na comparação é: R$ %i,00. ", maior);
	
	//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;
	
}
