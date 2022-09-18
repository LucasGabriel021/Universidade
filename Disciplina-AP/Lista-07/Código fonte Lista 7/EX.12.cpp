//Uma grande empresa deseja saber quais os tr�s empregados mais recentes. Fazer um algoritmo para ler um n�mero indeterminado de informa��es (m�ximo de 50)
//contendo a matr�cula funcional do empregado e o n�mero de meses de trabalho deste empregado. Mostre os tr�s empregados mais recentes.
//N�o existem dois empregados admitidos no mesmo m�s e a matr�cula igual a zero �0� encerra a leitura.  Observe o exemplo abaixo:

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
int matriculaFuncional[50], matricula, meses, quantidadeFuncionarios, i, j, troca, mesesTrabalho[50];
bool contratadosNoMesmoMes, mesmaMatricula;

quantidadeFuncionarios = 0;
i = 0;
j = 0;

//Inicio do c�digo
system("color A");
    setlocale(LC_ALL, "Portuguese");

	    printf("Informe |0| para encerrar! \n\n");
	        for(i = 0; i<50; i++){

		        contratadosNoMesmoMes = false;
		        mesmaMatricula = false;

		printf("Informe a matr�cula: ");
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
			    printf("Matr�cula informada esta invalida!\n\n");
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
		        printf("Funcion�rio %i, com %i meses de trabalho\n", matriculaFuncional[i], mesesTrabalho[i]);

//Pula linha
            printf("\n\n\n");

//Pause do programa
        system("pause");	    
	
//Retorno da fun��o	
return 0;    
}
