//Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao
//usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário
//informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando
//que as regiões deverão ser apresentadas conforme o seguinte menu de opções:

//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Função Principal
int main(){
	
//Declaração de variáveis	
int numero;	
	
//Entrada das informações
setlocale(LC_ALL, "Portuguese");
system("color A");	
	
printf(">---------------------------------------------------------<\n");
printf("\nCatalogo abaixo de regiões destinadas a passeio:\n");
printf("1 – Norte\n");
printf("2 – Nordeste\n");
printf("3 – Centro-Oeste\n");
printf("4 – Sudeste\n");
printf("5 – Sul\n");
printf("0 – Sair do programa\n");	
printf("\nQual das regiões o senhor(a) gostaria de conhecer?");
scanf("%d", &numero);	
printf(">---------------------------------------------------------<\n\n");

//Switch case	
switch(numero)
{
	case 1: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que você escolheu foi a região Norte, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 2: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que você escolheu foi a região Nordeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 3: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que você escolheu foi a região Centro-Oeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 4: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que você escolheu foi a região Sudeste, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
	case 5: 
	system("cls");
    printf(">-------------------------------------------------------------------------------<\n");
	printf("\nO destino que você escolheu foi a região Sul, tenha uma boa viagem!!!");
	printf("\n>-------------------------------------------------------------------------------<\n");
	break;
	
    default:
    printf("\nOpção invalida!!!");	
}	
	
//Pila linha
printf("\n\n\n\n");
	
//Pause do sistema
system("pause");	
	
//Retorno da função	
return 0;	
}
