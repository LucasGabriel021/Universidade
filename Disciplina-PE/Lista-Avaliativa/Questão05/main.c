#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Desenvolva uma calculadora que receba n1, op, n2 (exatamente nessa ordem),
dever�o serem consideradas +, -, *, / . Utilize uma fun��o para realiza��o de cada
opera��o aritm�tica (considere divis�o por zero), uma fun��o le_valida_operador e uma
fun��o menu onde usu�rio utilizar� a calculadora at� informar que deseja sair.
*/

char le_valida_op(char operadorValidar);
char menu(char finalizarCal);

int main(void){
     setlocale(LC_ALL, "Portuguese");
     printf("Lista Avaliativa!\n");
     printf("Quest�o 05\n");
     printf("Calculadora\n\n");
     
     printf("Op��es abaixo:\n");
     printf("-----------------------------------------------------------------------------------\n");
     printf("[+] --> Soma\n");
     printf("[-] --> Subtra��o\n");
     printf("[*] --> Multiplica��o\n");
     printf("[/] --> Divis�o\n");
     printf("-----------------------------------------------------------------------------------\n\n");
     
	float numeroA, numeroB;
	char operador, finalizar;
	do{
		printf("Digite o primeiro n�mero para a opera��o: ");
		scanf("%f", &numeroA);
		
		operador=le_valida_op(operador);
		
		printf("Digite o segundo n�mero para a opera��o: ");
		fflush(stdin);
		scanf("%f", &numeroB);
		
		if(numeroB == 0 && operador == '/'){
				printf("Opera��o de divis�o por zero n�o � poss�vel nos n�mero reais.");
			}else{
				switch(operador){
					case '/':
						printf("%.1f\n", numeroA/numeroB);
						break;
					case '*':
						printf("%.1f\n", numeroA*numeroB);
						break;
					case '-':
						printf("%.1f\n", numeroA-numeroB);
						break;
					case '+':
						printf("%.1f\n", numeroA+numeroB);
						break;
				}
			}
			finalizar=menu(finalizar);
		}while(finalizar == 'S' || finalizar == 's');
     return 0;
}
	
char le_valida_op(char operadorValidar){
	do{
		printf("Digite uma operacao valida que voce deseja realizar: ");
		fflush(stdin);
		scanf("%c", &operadorValidar);
		
			if(operadorValidar != '/' && operadorValidar != '*' &&operadorValidar != '-' && operadorValidar != '+'){
				printf("Voc� inseriu um operador inv�lido, por favor insira novamente! \n");
			}else{
				printf("Operador v�lido!\n");
			}
		}while(operadorValidar != '/' && operadorValidar != '*' && operadorValidar != '-' &&operadorValidar != '+');
	return operadorValidar;
	}
	
char menu(char finalizarCal){
	printf("Voc� deseja fazer outro calculo? [S]--> Sim [N] --> N�o\n");
	fflush(stdin);
	scanf("%c", &finalizarCal);
	
return finalizarCal;
}
