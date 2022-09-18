//Elabore  um  algoritmo  que  armazene  o  código  funcional  inteiro  e  respectivo  salário  real  de  todos  os funcionários  de  uma empresa.  
//Após  a  leitura  de  todos  os  dados  apresente  o maior e  o menor  salário  entre todos  funcionários  da  empresa,
//usando  um  subprograma  para  encontrar  o  maior  e  outro  para  encontrar o menor.    
//Por  fim,  acione  uma  outra  função  para  calcular  a  média  salarial  paga por  esta empresa.  
//O  maior  e menor  salário  deverão  ser  apresentados  por  um  procedimento  acionado  pelo  algoritmo  principal.  
//A  média salarial deverá ser apresentada por um procedimento acionado pela função que calcula a média.

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
int codigoFuncional[100], quantidadeFuncionarios, matricula, i, mesmaMatricula;
double salario, menorSalario, maiorSalario, soma, salarios[100];

soma = 0;
maiorSalario = 0;
salario = 0;
menorSalario = 0;
quantidadeFuncionarios = 0;
i = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");

        printf("Informe quantos salários serão verificados.");
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
	
//Retorno da função	
return 0;
	
} 
