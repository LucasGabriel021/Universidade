//Desenvolva um programa em C que leia tr�s valores num�ricos e apresente o maior valor informado no
//meio de uma janela limpa.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main(){
	
int n1 = 0, n2 = 0, n3 = 0;	
	
	setlocale(LC_ALL, "Portuguese");
	system("color A");
	
	printf("Informe o valor do 1� n�mero: ");
	fflush(stdin);
	scanf("%d", &n1);
	
	printf("Informe o valor do 2� n�mero: ");
	fflush(stdin);
	scanf("%d", &n2);
	
	printf("Informe o valor do 3� n�mero: ");
	fflush(stdin);
	scanf("%d", &n3);
	
	system("cls");
	
	printf("O primeiro n�mero que voc� digitou foi %d", n1);
	printf("\nO segundo n�mero que voc� digitou foi %d\n", n2);
	printf("O terceiro n�mero que voc� digitou foi %d", n3);
	
	printf("\n\n");
	system("pause");
	return 0;
}
