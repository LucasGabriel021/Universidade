//Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao
//usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio
//informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando
//que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:

//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun��o Principal
int main(){
	
//Declara��o de vari�veis	
int numero;	
	
//Entrada das informa��es
setlocale(LC_ALL, "Portuguese");
system("color A");	
	
printf(">---------------------------------------------------------<\n");
printf("\nCatalogo abaixo de regi�es destinadas a passeio:\n");
printf("1 � Norte\n");
printf("2 � Nordeste\n");
printf("3 � Centro-Oeste\n");
printf("4 � Sudeste\n");
printf("5 � Sul\n");
printf("0 � Sair do programa\n");	
printf("\nQual das regi�es o senhor(a) gostaria de conhecer?");
scanf("%d", &numero);	
printf(">---------------------------------------------------------<\n\n");

//Switch case	
switch(numero)
{
	case 1: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que voc� escolheu foi a regi�o Norte, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 2: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que voc� escolheu foi a regi�o Nordeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 3: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que voc� escolheu foi a regi�o Centro-Oeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 4: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que voc� escolheu foi a regi�o Sudeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 5: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que voc� escolheu foi a regi�o Sul, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
    default:
    printf("\nOp��o invalida!!!");	
}	
	
//Pila linha
printf("\n\n\n\n");
	
//Pause do sistema
system("pause");	
	
//Retorno da fun��o	
return 0;	
}
