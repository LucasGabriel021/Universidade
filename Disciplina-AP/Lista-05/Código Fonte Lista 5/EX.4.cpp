//Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de
//inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o:
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando
//se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{

char movel;

    setlocale(LC_ALL, "Portuguese");
	system("color A");

printf("M�veis d�sponiveis pela a empresa logo abaixo:\n ");
printf("1 Cadeira.\n");
printf("2 Mesa de computador.\n");
printf("3 Estante de livro.\n");
printf("4 Mesa de impressra.\n");
printf("5 Estante de CD.\n\n");

printf("Qual dos m�veis o senhor(a) gostaria de comprar: ");
fflush(stdin);
scanf("%s", &movel);

switch(movel)
{

    case 1:
    	printf("\nO que vc escolheu foi a cadeira, agradecemos por vossa compra!");
        break;
        
    case 2:
    	printf("\nO que vc escolheu foi a mesa de computador, agradecemos por vossa compra!");
    	break;
    	
    case 3:
    	printf("\nO que vc escolheu foi a estante de livro, agradecemos por vossa compra!");
		break;
		
	case 4:
    	printf("\nO que vc escolheu foi a mesa de empressora, agradecemos por vossa compra!");
		break;
		
	case 5:
    	printf("\nO que vc escolheu foi a estante de CD, agradecemos por vossa compra!");		
		break;
			
    default:
    printf("\n\nItem ind�sponivel na loja!");

}
    printf("\n\n\n");
	system("pause");
	return 0;

}
