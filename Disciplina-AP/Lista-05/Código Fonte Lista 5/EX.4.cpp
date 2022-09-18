//Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de
//informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são:
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando
//se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

char movel;

    setlocale(LC_ALL, "Portuguese");
	system("color A");

printf("Móveis dísponiveis pela a empresa logo abaixo:\n ");
printf("1 Cadeira.\n");
printf("2 Mesa de computador.\n");
printf("3 Estante de livro.\n");
printf("4 Mesa de impressra.\n");
printf("5 Estante de CD.\n\n");

printf("Qual dos móveis o senhor(a) gostaria de comprar: ");
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
    printf("\n\nItem indísponivel na loja!");

}
    printf("\n\n\n");
	system("pause");
	return 0;

}
