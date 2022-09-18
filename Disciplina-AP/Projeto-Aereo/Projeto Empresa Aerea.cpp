//Neste projeto tive ajuda de um aluno(Leonardo) e do monitor Igor Silva!

//Projeto de levantamento de pre�os de uma empresa aerea

//Bibliotecas
#include <stdio.h>//Biblioteca de comandos de entrada e sa�da
#include <stdlib.h>//Biblioteca de comandos gerais
#include <locale.h>//Biblioteca de acentua��o
#include <string.h>//Biblioteca que permite manipular string
#include <ctype.h>//Biblioteca de manipular caractere

//Definir cores com seus respectivos c�digos 
#define RED "\x1b[91m"//Cor vermelha
#define GREEN "\x1b[32m"//Cor verde
#define BLUE "\x1b[34m"//Cor azul
#define RESET "\x1b[0m"//Resetar cores

//Declara��o de fun��es utilizadas no programa
void preencheVetor(int,char[]);//Fun��o para preencher vetor
void mostraStatus(int,char[]);//Fun��o de mostrar status
void preencherLugar(int,char[]);//Fun��o de preencher lugar
void cancelarReserva(int,char[]);//Fun��o de cancelar reserva
int efetivarCompra(int ,char[]);//Fun��o efetivar compra
void relatorio(int,char[]);//Fun��o relat�rio

//Fun��o principal
int main(void) {

//Declara��o das vari�veis	
char destino[40], assentos[200];//Vari�veis do tipo caractere
int quantidadeAssento, numero, lugar, idade, valorPassagem, novaPassagem, valorTotal;//Vari�veis do tipo inteiro

valorTotal = 0;
novaPassagem = 0;
quantidadeAssento = 0;
valorPassagem = 0;

//Come�o do c�digo
    system("color F");
    setlocale(LC_ALL, "Portuguese");

//Printf comando de sa�da, ou seja, algo estar� escrito na tela
                        printf(" ______________________________________________________________________________________________________________________\n");
                        printf("|                                                                                                                      |\n");
                        printf("|                                         Bem vindo � SALUMAR LINHAS AEREAS!!!                                         |\n");
                        printf("|                      Digite as informa��es abaixo para fazermos as verifica��es necess�rias.                         |\n");
                        printf("|                                                                                                                      |\n");
                        printf("|______________________________________________________________________________________________________________________|\n\n");

//Comando de repeti��o do While, onde ele executa uma vez e depois verifica a condi��o
        do
        {
	                    printf("Informe o destino escolhido por nossos clientes: ");//Escreve algo na tela
                        fflush(stdin);	//Limpa o buffet do teclado
	                    gets(destino); //Recebe dados do tipo string 
	
	        if(strcmp(destino,"")==0) //Comando se, condi��o
	                    printf("Esse destino n�o existe em nosso sistema, tente novamente!\n ");
	
	        else //Comnado ent�o, condi��o
	                    printf("Seus dados est�o corretos! Prossiga com a opera��o.\n\n"); 
	
        }while(strcmp(destino,"")==0);//Comparar se n�o � um nome nulo


//Segundo do While
        do
        {
        	            printf("Informe quantos assentos est�o d�sponiveis para o voo em quest�o: ");
        	            fflush(stdin);
        	            scanf("%i", &quantidadeAssento);//Ler dados 
        	
        	if((quantidadeAssento < 90) || (quantidadeAssento >= 200))
        	            printf("Neste voo n�o e permitido esse quantitativo de assentos, por favor enforme novamente a quantidade.\n");
        	
            else       	
        	            printf("A informa��o est� correta! Prossiga com a opera��o.\n\n");  
        	
		}while((quantidadeAssento < 90) || (quantidadeAssento >= 200));


//Terceiro do While			 
       do
       {
       	    
       	                printf("Informe o valor da passagem em reais: ");
       	                fflush(stdin);
			            scanf("%i", &valorPassagem);  
			
			if(valorPassagem == 0)    
			            printf("Valor da passagem est� invalido! Tente novamente.\n ");
			
			else
			            printf("A informa��o est� correta! Prossiga com a opera��o.\n\n");			      
       	
	   }while(valorPassagem == 0);

//Informa��es a serem exibidas na tela logo em seguida	   
	                    printf(" ______________________________________________________________________________________________\n");
	                    printf("|                                                                                              |\n");
	                    printf("|   Logo abaixo ter� um menu onde a empresa poder� selecionar a op��o que melhor satisfazela,  |\n");
                        printf("|   para ativar a op��o desejada, digite o n�mero o qual a op��o est� indicada.                |\n");  
                        printf("|______________________________________________________________________________________________|\n\n");


//Caso o valor informado seja 7, fecha o programa
preencheVetor(quantidadeAssento, assentos);
            while (numero != 7)
		{ 
		
                        printf("\n\n");
                        printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
						printf("|              Selecione uma op��o abaixo:                      |\n");       
                        printf("|                                                               |\n");
                        printf("|             1 - Efetuar reserva.                              |\n");
                        printf("|             2 - Confirmar uma reserva.                        |\n");
                        printf("|             3 - Cancelar uma reserva.                         |\n");
                        printf("|             4 - Verificar ocupa��o de um voo.                 |\n");
                        printf("|             5 - Relat�rio de vendas.                          |\n");
                        printf("|             7 - Sair do programa                              |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|");

                       
                        printf("\n\nQual op��o deseja executar: ");
                        fflush(stdin);
                        scanf("%i", &numero);


//Switch Case inicio, comando condicional
            switch(numero)
			{
            	
//Op��o 1 do switch            	
                    case 1: 
                    
                system("cls");     
                    
                        printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avi�o abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                        
                        mostraStatus(quantidadeAssento,assentos);//Fun��o de preencher os assentos
                        printf("\n\nDigite a poltrona que o senhor(a), deseja reservar:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                            preencherLugar(lugar,assentos);
                        
                        printf("\n\nLogo abaixo, ser� solicitado a idade, caso seja menor que 5 anos, a pssagem tem desconto de 50 por cento.\n");
                        
                        printf("Informe sua idade: ");  
                        fflush(stdin);
                        scanf("%i", &idade);
                        
                        if (idade <= 5)
                        {
							novaPassagem = (valorPassagem / 2);
							printf("O valor a ser cobrado com desconto � de R$ %i,00. \n\n", novaPassagem);  
                        }
                        
                        else if (idade > 5){
                            printf("O pre�o da passagem a ser pago � de R$ %i,00. \n\n", valorPassagem);}                       
                    break;
                    
				
//Op��o 2 do switch    
                    case 2:
                    	
                    system("cls");	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Confirma��o de reserva:                       |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                        printf("Informe o numero da reserva do sehnhor(a) para confirmamos a passagem:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                        
                        lugar = efetivarCompra(lugar, assentos);//Fun��o para a confirma��o de lugares 
                            
                        if(lugar == 1) 
                            printf("Compra realizada com sucesso!");
                            
                        else if(lugar == 5)
                            printf("Lugar j� foi comprado");
          
                        else
                            printf("Este lugar esta sem reserva ou j� foi comprado. Fa�a sua reserva primeiro!");        
                    break;

                
//Op��o 3 do switch                
                    case 3:
                    	
                system("cls");    	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avi�o abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                        mostraStatus(quantidadeAssento,assentos);
                        printf("\n\nInforme a poltrona que o senhor(a), deseja cancelar:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                        
                        cancelarReserva(lugar,assentos);//Fun��o para o cancelamento de assentos j� reservados 
                    break;
                
                
//Op��o 4 do switch                
                    case 4:
                    	
                system("cls");    	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avi�o abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                       mostraStatus(quantidadeAssento,assentos);
                    break;

                
//Op��o 5 do switch                
                    case 5:
                    	
                system("cls");
                    	
                        relatorio(quantidadeAssento,assentos);//Fun��o de relat�rio
                    break;
    }
          
}

  return 0;
}


//Fun��o de preencher um vetor
void preencheVetor (int quantidadeAssento,char assentos[200])
{
	int i;
  for( i = 0; i < quantidadeAssento; i++)
    assentos[i] = 'D';

}


//Fun��o de mostrar status
void mostraStatus (int quantidadeAssento,char assentos[200])
{
	int i;
  for(i = 0; i < quantidadeAssento; i++){
    printf("[%i] = %c",i+1,assentos[i]);
 
//Mudan�a de cor no sistema 
   
    if (assentos[i] == 'R')
    printf(RED"[%i] = %c"RESET, i+1, assentos[i]);
    
    else if (assentos[i] == 'C')
    printf(BLUE"[%i] = %c"RESET, i+1, assentos[i]);
    
}
}


//Fun��o de preencher lugares
void preencherLugar (int lugar,char assentos[200])
{
  assentos[lugar-1] = 'R';
}


//Fun��o para cancelar reservas
void cancelarReserva (int lugar,char assentos[200])
{
   assentos[lugar-1] = 'D';
}


//Fun��o para efetivar compra
int efetivarCompra (int lugar,char assentos[200])
{
  if (assentos[lugar-1] == 'R')
  {
   assentos[lugar-1] = 'C';
   return 1;
  }
  
   else if (assentos[lugar-1]=='C')
    return 5;
    
    else 
      return -1;
}


//Fun��o do relat�rio
void relatorio (int quantidadeAssento,char assentos[200])
{
  int livres = 0, comprados = 0, reservados = 0;
  int i;
  int valorTotal = 0;
 
  
  for (i = 0; i < quantidadeAssento;i++)
  {
    if (assentos[i] == 'R')
        reservados++;
        
      else if( assentos[i] == 'D')
        livres++;
        
      else
        comprados++;
      
  }
  
                      	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Relat�rio da viagem abaixo:                   |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
  
  
                        printf("Assentos livres: %i. ",livres);
                        printf("\nAssentos comprados: %i. ", comprados);
                        printf("\nAssentos reservados: %i. ", reservados); 

}
