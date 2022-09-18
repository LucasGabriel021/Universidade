//Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá
//ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e
//apresentar o resultado calculado deste percentual.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

double percentual, porcentagem = 0;
	
	setlocale(LC_ALL, "Portuguese");
	system("color A");
	
	printf("Informe o percentual desejado: ");
	fflush(stdin);
	scanf("%lf", &percentual);
	
	porcentagem =( (555 * percentual) / 100 );
	
	printf("O percentual de informado do número 555 é %.2lf ", porcentagem);
	
	printf("\n\n");
	system("pause");
	return 0;
}
