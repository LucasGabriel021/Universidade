//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N �
//fornecido pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun��o principal
int main(){

//Declara��o das vari�veis
int fatorial = 0, numero = 0, contador = 0;

//Entrada das informa��es
setlocale(LC_ALL, "Portuguese");
system("color A");

printf("Informe o n�mero desejado para o c�lculo do fatorial:");
fflush(stdin);
scanf("%d", &numero);

//Comando de repeti��o
while(contador < numero){
	
fatorial =((numero - 1) * numero);

printf("\nO fatorial do n�mero %d! � %d", numero, fatorial);

contador++;
}

//Pula linha
printf("\n\n");

//Pause do programa
system("pause");

//Retorna da fun��o
return 0;

}
