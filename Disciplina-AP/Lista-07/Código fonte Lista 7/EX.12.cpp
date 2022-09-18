//Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler um número indeterminado de informações (máximo de 50)
//contendo a matrícula funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três empregados mais recentes.
//Não existem dois empregados admitidos no mesmo mês e a matrícula igual a zero ‘0’ encerra a leitura.  Observe o exemplo abaixo:

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
int matriculaFuncional[50], matricula, meses, quantidadeFuncionarios, i, j, troca, mesesTrabalho[50];
bool contratadosNoMesmoMes, mesmaMatricula;

quantidadeFuncionarios = 0;
i = 0;
j = 0;

//Inicio do código
system("color A");
    setlocale(LC_ALL, "Portuguese");

	    printf("Informe |0| para encerrar! \n\n");
	        for(i = 0; i<50; i++){

		        contratadosNoMesmoMes = false;
		        mesmaMatricula = false;

		printf("Informe a matrícula: ");
		fflush(stdin);
		scanf("%i", &matricula);
		    if(matricula == 0) break;

		    for(int j = 0; j < quantidadeFuncionarios; j++)
			    if(matricula == matriculaFuncional[j]) mesmaMatricula = true;

		printf("Informe quantos meses de trabalho: ");
		fflush(stdin);
		scanf("%i", &meses);

		    for(int j = 0; j < quantidadeFuncionarios; j++)
			    if(meses == mesesTrabalho[j]) contratadosNoMesmoMes = true;

		        if(!mesmaMatricula && !contratadosNoMesmoMes){
			    mesesTrabalho[quantidadeFuncionarios] = meses;
			    matriculaFuncional[quantidadeFuncionarios] = matricula;
			    quantidadeFuncionarios++;
		    } 
		    
		    else {
			    printf("Matrícula informada esta invalida!\n\n");
		}
	}

	        for(i = 0; i< quantidadeFuncionarios; i++){
		        for(j = 0; j< quantidadeFuncionarios; j++){
			        if(mesesTrabalho[i] < mesesTrabalho[j]){
			            troca = mesesTrabalho[i];
				        mesesTrabalho[i] = mesesTrabalho[j];
				        mesesTrabalho[j] = troca;
				        troca = matriculaFuncional[i];
				        matriculaFuncional[i] = matriculaFuncional[j];
				        matriculaFuncional[j] = troca;
			}
		}
	}

	        system("cls");
	       for(i = 0; i< 3; i++)
		        printf("Funcionário %i, com %i meses de trabalho\n", matriculaFuncional[i], mesesTrabalho[i]);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da função	
return 0;    
}
