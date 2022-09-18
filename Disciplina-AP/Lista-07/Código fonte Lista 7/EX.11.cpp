//Elabore  um  algoritmo  que  armazene  o  c�digo  funcional  inteiro  e  respectivo  sal�rio  real  de  todos  os funcion�rios  de  uma empresa.  
//Ap�s  a  leitura  de  todos  os  dados  apresente  o maior e  o menor  sal�rio  entre todos  funcion�rios  da  empresa,
//usando  um  subprograma  para  encontrar  o  maior  e  outro  para  encontrar o menor.    
//Por  fim,  acione  uma  outra  fun��o  para  calcular  a  m�dia  salarial  paga por  esta empresa.  
//O  maior  e menor  sal�rio  dever�o  ser  apresentados  por  um  procedimento  acionado  pelo  algoritmo  principal.  
//A  m�dia salarial dever� ser apresentada por um procedimento acionado pela fun��o que calcula a m�dia.

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
int codigoFuncional[100], quantidadeFuncionarios, matricula, i, mesmaMatricula;
double salario, menorSalario, maiorSalario, soma, salarios[100];

soma = 0;
maiorSalario = 0;
salario = 0;
menorSalario = 0;
quantidadeFuncionarios = 0;
i = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

        printf("Informe quantos sal�rios ser�o verificados.");
        fflush(stdin);
	    scanf("%i", &quantidadeFuncionarios); 

		    for(i = 0; i<100; i++){

		        printf("DIGITE A MATRICULA: ");
		        fflush(stdin);
		        scanf("%i", &matricula);

		    for(int j = 0; j < quantidadeFuncionarios; j++)

		        printf("DIGITE O SALARIO DO FUNCIONARIO: ");
		        fflush(stdin);
		        scanf("%d", &salario);


		        if(!mesmaMatricula){
			        salarios[quantidadeFuncionarios] = salario;
			        codigoFuncional[quantidadeFuncionarios] = matricula;
			        quantidadeFuncionarios++;
			        
			    if(salario > maiorSalario) maiorSalario = salario;
			        if(salario < menorSalario) menorSalario = salario;
			            soma = soma + salario;
			            
		} else printf("MATRICULA JA EXISTENTE!\n\n");
	}

	double mediaSalarial = soma / quantidadeFuncionarios;

	printf("MAIOR SALARIO: %d\n", maiorSalario);
	printf("MENOR SALARIO %d\n", menorSalario);
	printf("MEDIA SALARIAL %d", mediaSalarial);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;
	
} 
