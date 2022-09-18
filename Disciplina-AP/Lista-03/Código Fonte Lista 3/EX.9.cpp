//Uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de uma determinada regi�o
//coletou os seguintes dados, referentes a cada habitante:
//a) sexo (masculino, feminino);
//b) cor dos olhos (azuis, verdes, castanhos, pretos);
//c) cor dos cabelos (loiros, castanhos, pretos);
///d) idade em anos.
//Para indicar fim dos habitantes pesquisados, o usu�rio fornecer� um habitante fict�cio com idade
//igual a �1. Fazer um algoritmo que determine e escreva:
//a) a maior idade dos habitantes pesquisados;
//b) a porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos
//inclusive e que tenham olhos verdes e cabelos loiros.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//Fun��o principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color A");

//Declara��o das vari�veis	
	char sexo, corOlho[10], corCabelo[10];
	int idade, i = 0, mulherEspecifica = 0, maiorIdade, pessoas;
	float porcentagem;

//Entrada de informa��es	
	printf("Quantas pessoas ser�o cadastradas? ");
	scanf("%d", &pessoas);
	fflush(stdin);
	
	printf("Para encerrar a pesquisa digite '-1' no campo idade.\n");
	do {
		printf("Digite o sexo da %d� pessoa |m|ou|f|: ", i);
		fflush(stdin);
		scanf("%c", &sexo);
		sexo=tolower(sexo);
			
		printf("Cor dos olhos da %d� pessoa: |azul| |castanho| |verde| |preto|: ", i);
	    fflush(stdin);
		scanf("%s", &corOlho);
			
		printf("Cor do cabelo da %d� pessoa: |loiro| |castanho| |preto|: ", i);
		fflush(stdin);
		scanf("%s", &corCabelo);
		
		printf("Informe a idade da %d� pessoa: \n", i);
		fflush(stdin);
		scanf("%d", &idade);
		
		if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(corOlho, "verde") && strcmp(corCabelo, "loiro"));
			mulherEspecifica++;
		
		if(i == 1)
			maiorIdade = idade;
		if(maiorIdade < idade) 
			maiorIdade = idade;
			
		i++;	
	} while(idade >= 0);
		
		porcentagem = (mulherEspecifica/pessoas) * 100; 
		
		
		printf("\n\nO(a) habitante com a maior idade possui: %d anos.\n", maiorIdade);
		printf("\nA porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro � de: %.2f %%", porcentagem);

//Pula linha
printf("\n\n");
	
//Pause do programa	
system("pause");	

return 0;	
}
