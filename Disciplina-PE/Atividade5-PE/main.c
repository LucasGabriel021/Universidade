#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2 - Sinaliza��o do Procedimento
void head();

//2 - Sinaliza��o da Fun��o
float calcSoma(float n1, float n2);
char le_valida_operador();

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	//3 - Chamando um Procedimento
	head();
	
	float numero_um = 0, numero_dois = 0;
	char operador;
	printf("-------------------------------------\n");
	
	printf("Informe um n�mero: ");
	fflush(stdin);
	scanf("%f", &numero_um);
	
	printf("Informe qual o tipo da opera��o: ");
	fflush(stdin);
	operador = le_valida_operador();
	
	printf("Informe outro n�mero: ");
	fflush(stdin);
	scanf("%f", &numero_dois);
	
	printf("-------------------------------------");
	
	float soma = 0, multi = 0, subtracao = 0, divisao = 0;
	switch(operador) {
		case '+': 
			//3 - Chamada da Fun��o em uma vari�vel
			soma = calcSoma(numero_um, numero_dois);
			printf("\nO resultao �: %.1f", soma);
			break;
			
		case '-': 
			subtracao = (numero_um - numero_dois);
			printf("\nO resultao �: %.1f", subtracao);
			break;
			
		case '*':
			multi = (numero_um * numero_dois);
			printf("\nO resultao �: %.1f", multi);
			break;
			
		case '/':
			divisao = (numero_um / numero_dois);
			printf("\nO resultao �: %.1f", divisao);
			break;
			
		default:
			printf("\nOpera��o invalida!");
	}
	
	printf("\n-------------------------------------\n");
	
	return 0;
}

//1 - Declara��o do Procedimento
void head() {
	printf("Atividade 27/04/22\n");
	printf("Atividade calculadora\n");
}

//1 - Declara��o da Fun��o
float calcSoma(float n1, float n2) {
	float resultado = (n1 + n2);
	return resultado;
}

char le_valida_operador() {
	char op;
	int count = 0;
	
	do {
		if(count != 0) {
			printf("\nERRO!\n");
		}
		scanf("%c", &op);
		
		count++;
	}while(op != '+' && op != '-' && op != '*' && op != '/');
	
	return op;
}
