//Nome completo: Lucas Gabriel Gomes de Oliveira
//Matric�la: UC21103713
//Ci�ncia da Computa��o

//Projeto de identifica��o dos clientes de um cinema em Bras�lia

//Bibliotecas logo abaixo:
#include <stdio.h>  //comandos de entrada e sa�da. Exenplo usado: printf e scanf 
#include <stdlib.h>  //fun��es de uso geral uso do system("pause") por exemplo
#include <string.h>  //manipula strings. Exemplo usado no c�digo: compara duas strings
#include <locale.h> //biblioteca que permite acentuar palavras

//Fun��o principal abaixo:
int main(){
	
//Declara��o das vari�veis abaixo: A escolha do nome das vari�veis foi escolhidas de acordo com que fique com um melhor entendimento para quem ir� ler e para o pr�prio programador para que ele nao se perca nos diversos comandos abaixo.
int sessao, total_expectadores, i, idade, quantidadeM = 0, quantidadeF = 0, crianca = 0, adolescente = 0, adulto = 0, idoso = 0, maioridadeM, maioridadeF, lucro; //Vari�veis do tipo inteiro %d
char sexo, filme[77]; //Vari�veis do tipo caractere %s
	
//Entrada e sa�da dos dados abaixo:

//Comandos adicionais    
	setlocale(LC_ALL, "Portuguese"); //Permite acentuar as palavras.
    system("color A"); //Mudar de cor as palavras na hora da execu��o.
    
    
//Informa��es adicionais na tela. Sa�da de informa��es  
             printf("|--------------------------------------------------------------------------------------->|\n");
             printf("->Bem vindo ao cinema de Br�silia!!\n");
             printf("\n->Aqui a m�gica acontece!!");  
			 printf("\n->Hoje os ingressos est�o por meia entrada, hoje qualquer pessoa paga apenas R$ 7,00\n");
			 printf("\n->Hoje o combo com pipoca e refrigerante � por apenas R$ 21,00\n");
             printf("|--------------------------------------------------------------------------------------->|\n\n");
             printf("\n-Insira abaixo os dados dos clientes e as sess�es disponiveis.");


//Quantidade de sess�es dispon�veis no cinema. Uso de comando de sa�da, entrada, repeti��o e condicional   
             printf("\n\n->Informe quantas sess�es foram utilizadas:\n");  
    do{ //Comando de repeti��o do e while, realiza os comandos e depois testa a condi��o
    	     fflush(stdin); //Limpar o buffer do teclado 
    	     scanf("%d", &sessao); 

       if(sessao != 2){   //Condi��o        
    	     printf("<-----N�o foi encontrado registros no nosso servidor a quantidade informada, insira novamente os dados.----->\n");}		
      }
    while(sessao != 2);	//Condi��o
   
   
//Informa��es do filme. Uso de comando de sa�da, entrada, repeti��o e condicional
            printf("\n->Informe o nome do filme assistido:\n");
    do{	//Comando de repeti��o
            fflush(stdin); 
            gets(filme); 
            
       if(strcmp(filme,"")==0){ //Compara se tem campos vazios. 
            printf("<-----Nome invalido, tente novamente.----->\n");}   
      }
    while(strcmp(filme,"")==0); //Condi��o
    
    
//Quantidade de pessoas que assistiram o filme. Uso de comando de sa�da, entrada, repeti��o e condicional     
            printf("\n->Quantidade de pessoas que assistiram o filme:\n");
    do{  //Comando de repeti��o do e while, realiza os comandos e depois testa a condi��o
            fflush(stdin); 
	        scanf("%d", &total_expectadores);
			 
       if(total_expectadores < 10) //Condi��o
			printf("\n<-----N�mero de expectadores negado! Tente novamente!----->\n");          
      }
    while(total_expectadores < 10); //Condi��o
    
    
//Inforamar abaixo o sexo do ind�viduo e incrementos. Uso de comando de sa�da, entrada, repeti��o e condicional 
    for(i = 1; i <= total_expectadores; i++){ 
    	do{ //Comando de repeti��o do e while, realiza os comandos e depois testa a condi��o
            printf("\n->Informe o sexo do cliente. M para homem, F para mulher:");
            fflush(stdin); //Limpar o buffer do teclado
            scanf("%s", &sexo);
       
	   if(sexo != 'M' && sexo != 'F')  //Condi��o  
            printf("<-----Formato invalido!----->");
	      }  
	while(sexo != 'M' && sexo != 'F'); //Condi��o
	

//Entrada dos dados da idade das pessoas. Uso de comando de sa�da, entrada, repeti��o e condicional  
    do{ //Comando de repeti��o do e while, realiza os comandos e depois testa a condi��o
    	   printf("Informe a idade do cliente para fazermos as verifica��es da faixa et�ria do cinema:");
    	   fflush(stdin); 
    	   scanf("%d", &idade);
    	
       if(idade<3 || idade>100) //Condi��o
           printf("<-----Formato incorreto, tente novamente:----->");
	}
    while(idade<3 || idade>100); //Comando de repeti��o
    

//Verifica��o de quantos homens ou mulheres s�o de maiores e icrementos.
        if(sexo == 'M'){ //Condi��o
        	  quantidadeM++; //incremento
		}    
        else{ //Condi��o 2
        	  quantidadeF++; //incremento
		}
		
		if(sexo == 'M'){ //Condi��o
			
			maioridadeM++; //incremento
		}
		else{ //Condi��o 2
			maioridadeF++; //incremento	
		}

 
 //Diferencia��o da faixa et�ria das pessoas no cinema e incrementos.  
        if(idade >= 3 && idade <= 13){
		      crianca++;} //incremento
			  
		else if(idade >= 14 && idade <= 17){ //Condi��o
              adolescente++;}  //incremento
			    
        else if(idade >= 18 && idade <= 64){ //Condi��o
              adulto++;} //incremento
			  
		else if(idade >= 65 && idade <= 100){ //Condi��o
		      idoso++;}	 //incremento 
    }
    
    
//Lucro do cinema

              lucro = (total_expectadores * 7);    
    
//Pula linha		   	   
    printf("\n\n");
    
//Limpa a tela
	system("cls");
	
//Informa��es na tela 2, uso de comandos de sa�da

	          printf("Informa��es na tela da faixa et�ria frequentadora e o nome do filme!!\n");
	          
	          printf("|--------------------------------------------------------------------------------------->|\n");
              printf("\nO nome do filme assistido nas sess�es foi %s.\n", filme);	
	          
	          printf("\n#Qunatidade de pessoas do sexo masculino: %d", quantidadeM);
	          printf("\n#Quantidade de pessoas do sexo feminino: %d", quantidadeF);
	          printf("\n\n#Quantidade de crian�as: %d\n", crianca);
	          printf("\n#Quantidade de adolescente: %d\n", adolescente);
	          printf("\n#Quantidade de adultos: %d\n", adulto);
	          printf("\n#Quantidade de idosos: %d\n\n", idoso);
              printf("|--------------------------------------------------------------------------------------->|\n");


//Pula linha		   	   
    printf("\n\n\n\n\n\n\n");
    printf("LOADING...\n\n");

//Pause doo programa
    system("pause");
    
//Limpa a tela
	system("cls");
	
//Informa��es na tela 3, uso de comandos de sa�da
	          printf("-->Diferen�a do sexo em nossas sess�es:\n\n");
	          
	          printf("|--------------------------------------------------------------------------------------->|\n\n");
	          
	          printf("\n#O lucro total de ingressos do cinema do dia analisado foi: R$ %d,00", lucro);
              printf("\n#Pessoas do sexo masculino maiores de idade: %d", maioridadeM);
	          printf("\n#Pessoas do sexo feminino maiores de idade: %d", maioridadeF);
	          printf("\n\n|--------------------------------------------------------------------------------------->|\n");
	
	
//Pula linha	
    printf("\n\n\n\n\n\n\n\n");	
	printf("LOADING...\n\n");
	
//Pause doo programa	
	system("pause");	
	
//Retorno da fun��o	
	return 0;
}
