/*
 - Nome Aluno: Lucas Gabriel Gomes de Oliveira.
 - Matrícula Aluno: UC21103713.
 
 
 - Nome Aluno: Marcos Rezende dos Santos
 - Matrícula Aluno: UC21106205.
*/

//Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Criar define para codigo mais limpo
#define PAUSA_TELA system("pause")
#define LIMPA_TELA system("cls")
#define MAX_PILOTO 1000
#define MAX_CIRCUITO 3000

//criação de structs
typedef struct {
	int id_piloto;
	char nome_piloto[120];
	int idade;
	char pais_piloto[200];
	char sexo_piloto;
}Pilotos;

typedef struct{
	int data_dia;
    int data_mes;
    int data_ano;
}Data;

typedef struct{
	int minutos;
	int segundos;
	int milisegundos;
}Tempo;

typedef struct {
	int id_piloto;
	int id_circuito;
   	char nome_equipe_do_piloto[50];
   	int id_volta;
	Data data;
	Tempo tempo;	
}Melhor_volta;

typedef struct{
	int id_circuito;
	int id_melhor_piloto;
	char nome_circuito[100];
	char pais_circuito[30];
	float tamanho_do_circuito;
	Melhor_volta melhor;
}Circuitos;

//Declaração das funções
int verificar_id_piloto(Pilotos *id_do_piloto);
char adicionar_nome_piloto(int contadorPiloto, Pilotos *nome_piloto);
int adicionar_idade_piloto(Pilotos *idade_do_piloto);
char adicionar_sexo_piloto(Pilotos *sexo_do_piloto);
char adicionar_pais_piloto(int contadorPiloto, Pilotos *pais_do_piloto);
int verificar_circuito(Circuitos *id_do_circuito);
char adicionar_nome_do_circuito(int contadorCircuito , Circuitos *nome_do_circuito);
char adicionar_pais_circuito(int , Circuitos *);
float tamanho_circuito(Circuitos *tamanho_do_circuitos);
int verificar_id_voltas(Melhor_volta *id_da_volta);
int validar_piloto(Pilotos *validar_id_piloto);
Circuitos validar_circuito(Circuitos *validar_id_circuito);
char adicionar_nome_equipe_piloto(Melhor_volta *nome_equipe_piloto, int j);
Tempo tempoCircuito();
Tempo valida_menor_tempo(Circuito );
Data dataCircuito();
Data validar_data(Circuitos circuito, int id_melhor_piloto/* int j*/);
int validar_contador_piloto(Pilotos *validar_id_piloto);
int validar_contador_circuito(Circuitos *validar_id_circuito);
int validar_contador_voltas(Melhor_volta *validar_id_volta);
int validar_nome_piloto(Pilotos *validar_nome_piloto);
int validar_nome_circuito(Circuitos *validar_nome_circuito);

//------------------------Função main------------------------ 
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, i=0, g=0,j=0, contadorPiloto = 0, contadorCircuito=0, opcao_relatorio, opcao_relatorio_simples, contadorAux_piloto=0, contadorAux_circuito=0, contadorAux_volta=0;
	int contadorAux_nomePiloto, contadorAux_nomeCircuito;
	char sair_programa;
	Circuitos circuitoAux;
	Pilotos piloto[MAX_PILOTO];
	Circuitos circuito[MAX_CIRCUITO];
	Melhor_volta melhor_volta[MAX_CIRCUITO];
	
//------------------------------Menu------------------------ 
	do{
     	fflush(stdin);
     	printf("BEM VINDO à PLATAFORMA DA SUA FÓRMULA 1!\n");
          printf("\nPara começarmos esolha uma das opções abaixo: \n");
          printf("\n1- Para fazer os cadastramento de um piloto.");
          printf("\n2- Para fazer os cadastramento de um circuito.");
          printf("\n3- Para fazer a inclusução da melhor volta de um piloto.");
          printf("\n4- Para fazer consultas de algum dado já cadastrado anteriormente.");
          printf("\n5- Encerrar o programa.\n\n");
          scanf("%d", &opcao);
    
          if(opcao==5){
              	printf("Opção escolhida foi a opção de número 5, agora o programa será encerrado.\n\n");
               PAUSA_TELA;
          	LIMPA_TELA;
     	}
          else if(opcao==1 || opcao==2 || opcao==3 || opcao==4){
     		printf("Opção escolhida foi %d opção\n\n", opcao);
          	PAUSA_TELA;
          	LIMPA_TELA;
     	}else{
     		printf("Opção não é reconhecida no nosso sistema! Por favor, indique uma das opções disponíveis\n");
          	//PAUSA_TELA;
          	//LIMPA_TELA;
     	}
		switch(opcao){
			case 1:
			     printf("Opção 1 selecionada, faça o cadastro do piloto!\n\n");
				piloto[i].id_piloto = verificar_id_piloto(&piloto);
				piloto[i].nome_piloto[120] = adicionar_nome_piloto(contadorPiloto, &piloto);
				piloto[i].idade = adicionar_idade_piloto(&piloto);
				piloto[i].sexo_piloto = adicionar_sexo_piloto(&piloto);				
				piloto[i].pais_piloto[200] = adicionar_pais_piloto(contadorPiloto, &piloto);
				i++;
				contadorPiloto++;
			break;
			
			case 2:
			     printf("Opção 2 selecionada, faça o cadastro do circuito!\n\n");
				circuito[g].id_circuito = verificar_circuito(&circuito);
				circuito[g].nome_circuito[100] =  adicionar_nome_do_circuito(contadorCircuito , &circuito);
				circuito[g].pais_circuito[30] = adicionar_pais_circuito(contadorCircuito , &circuito);
				circuito[g].tamanho_do_circuito = tamanho_circuito(&circuito);
				circuito[g].melhor.tempo.minutos=50000;
				circuito[g].melhor.data.data_dia=50000;
				circuito[g].melhor.data.data_mes=50000;
				circuito[g].melhor.data.data_ano=50000;
				g++;
				contadorCircuito++;
			break;
			
			case 3:
				fflush(stdin);
				melhor_volta[j].id_volta = verificar_id_voltas(&melhor_volta);
				melhor_volta[j].id_piloto = validar_piloto(&piloto);
				circuitoAux = validar_circuito(&circuito);
				melhor_volta[j].id_circuito = circuitoAux.id_circuito;
				melhor_volta[j].nome_equipe_do_piloto[50] = adicionar_nome_equipe_piloto(&melhor_volta, j);
				melhor_volta[j].tempo = valida_menor_tempo(circuitoAux, melhor_volta[j].id_piloto);
				//ate aqui certo!
                    //melhor_volta[j].data =  validar_data(circuitoAux, melhor_volta[j].id_piloto /*,j*/);
				j++;
			break;
			
			case 4:
				printf("Agora qual das opções você deseja acessar: \n");
				printf("1- Consulta simples dos registros.\n");
				printf("2- Pesquisar os pilotos registrados, com o seu nome. \n");
				printf("3- Pesquisar um determinado circuito. \n");
				printf("4- Pesquisar os registros por pilotos rapidos nos circuitos.\n");
				printf("5- Voltar ao menu principal.");
				scanf("%d", &opcao_relatorio);
				
				switch(opcao_relatorio){
					case 1:
						printf("Em que área dos registros você deseja fazer uma verificação: \n");
						printf("1- Pilotos\n");
						printf("2- Circuitos\n");
						printf("3- Voltas rápidas\n");
						printf("4- Voltar ao menu principal.");
						scanf("%d", &opcao_relatorio_simples);
						
							switch(opcao_relatorio_simples){
								case 1:
									if(i==0){
										printf("Não foi realizada nenhuma inclusão de piloto! Retorne ao menu principal.\n");
									}
                                             else{
     									contadorAux_piloto = validar_contador_piloto(&piloto);
     									printf("%d\n", piloto[contadorAux_piloto].id_piloto);
     									printf("%s", piloto[contadorAux_piloto].nome_piloto);
     									printf("%d\n", piloto[contadorAux_piloto].idade);
     									printf("%c", piloto[contadorAux_piloto].sexo_piloto);
     									printf("\n%s\n", piloto[contadorAux_piloto].pais_piloto);
									}
								break;
								
								case 2:
									if(g==0){
										printf("Não foi realizada nenhuma inclusão de circuito! Retorne ao menu principal.\n");
									}
                                             else{
     									contadorAux_circuito = validar_contador_circuito(&circuito);
     									printf("%d\n", circuito[contadorAux_circuito].id_circuito);
     									printf("%d\n", circuito[contadorAux_circuito].nome_circuito);
     									printf("%d\n", circuito[contadorAux_circuito].pais_circuito);
									}
								break;
								
								case 3:
									if(j==0){
										printf("Não foi realizada nenhuma inclusão de melhor volta! Retorne ao menu principal.\n");
									}
                                             else{
     									contadorAux_volta = validar_contador_voltas(&melhor_volta);
     									printf("%d\n", melhor_volta[contadorAux_volta].id_volta);
     									printf("%d\n", melhor_volta[contadorAux_volta].id_piloto);
     									printf("%d\n", melhor_volta[contadorAux_volta].id_circuito);
     									printf("%s\n", melhor_volta[contadorAux_volta].nome_equipe_do_piloto);
     									printf("%d:", melhor_volta[contadorAux_volta].tempo.minutos);
     									printf("%d:", melhor_volta[contadorAux_volta].tempo.segundos);
     									printf("%d\n", melhor_volta[contadorAux_volta].tempo.milisegundos);
									}
								break;	
					break;
							}
					case 2:
						if(i==0){
							printf("Não foi realizada nenhuma inclusão de piloto! Retorne ao menu principal.\n");
						}
                              else{
							contadorAux_nomePiloto = validar_nome_piloto(&piloto);
							printf("%d\n", piloto[contadorAux_nomePiloto].id_piloto);
							printf("%s\n", piloto[contadorAux_nomePiloto].nome_piloto);
							printf("%d\n", piloto[contadorAux_nomePiloto].idade);
							printf("%c\n", piloto[contadorAux_nomePiloto].sexo_piloto);
							printf("%s\n", piloto[contadorAux_nomePiloto].pais_piloto);
						}
					break;
					
					case 3:
						if(g==0 && i==0 && j==0){
							printf("Não foi realizada inclusão, ou algum campo ficou sem ser preenchido! Retorne ao menu principal.\n");
						}
                              else{
     						contadorAux_nomeCircuito =  validar_nome_circuito(&circuito);
     						printf("%d\n", melhor_volta[contadorAux_nomeCircuito].id_volta);
     						printf("%d\n", melhor_volta[contadorAux_nomeCircuito].id_piloto);
     						printf("%d\n", melhor_volta[contadorAux_nomeCircuito].id_circuito);
     						printf("%s\n", melhor_volta[contadorAux_nomeCircuito].nome_equipe_do_piloto);
     						printf("%d:", melhor_volta[contadorAux_nomeCircuito].tempo.minutos);
     						printf("%d:", melhor_volta[contadorAux_nomeCircuito].tempo.segundos);
     						printf("%d:", melhor_volta[contadorAux_nomeCircuito].tempo.milisegundos);
						}
					
					break;
					case 4:
						//Obs: pensar
						
					break;
				}
			break;
			
			case 5:
				sair_programa = 's';
			     break;
		}
	}while(sair_programa != 's');
	
	return 0;
}

//Criação de funções

//Função para a criação de id's para pilotos
//Tendo o devido cuidado para não repetir o id
int verificar_id_piloto(Pilotos *id_do_piloto){
	int idPiloto=0, contador=0;
	
	do{
		fflush(stdin);
		printf("Qual é o código de identificação desse piloto: ");
		scanf("%d", &idPiloto);
		
		if(idPiloto<100 || idPiloto>500){
			printf("Código de identificação inválido. Por favor, inserir um código não utilizado antes, entre 100 e 500!\n");
		}
          else{
     		for(contador = 0; contador < MAX_PILOTO; contador++) {
                    if(idPiloto == id_do_piloto[contador].id_piloto) {
                         printf("Identificador do número inválido, número repetido!\n ");
                         idPiloto = 0;
                         break;
                    }
               }
		}
		}while(idPiloto<100 || idPiloto>500);
		
	return idPiloto;
}

//Função para adicionar um nome ao piloto que está sendo cadastrado
//Aqui recebemos um contador para não misturar os índices, pois o retorno de char em função necessita de outras funções
//Foi preferido ultilizar scanf em vez de fgets, pela praticidade de não ter que se preocupar com o caractere '\n' ao final
char adicionar_nome_piloto(int contadorPiloto, Pilotos *nome_do_piloto){
	char nome[120];
	
	fflush(stdin);
	printf("Digite o nome desse piloto: ");
	scanf("%[^\n]s", &nome);
	
	strcpy(nome_do_piloto[contadorPiloto].nome_piloto , nome);
	
	return nome_do_piloto[contadorPiloto].nome_piloto;
}

//Função para adicionar uma idade ao piloto que está sendo cadastrado
int adicionar_idade_piloto(Pilotos *idade_do_piloto){
	int idade;
	int contador=0;
	
	fflush(stdin);
	printf("Digite, em anos, a idade do piloto: ");
	scanf("%d", &idade);
	
	return idade;
}

//Função para adicionar um sexo ao piloto que está sendo cadastrado
//O retorno de um caractere é apenas de um byte
char adicionar_sexo_piloto(Pilotos *sexo_do_piloto){
	char sexo;
	
	fflush(stdin);
	printf("Sabendo que 'F'-Feminino e 'M'-Masculino. Digite o sexo desse piloto: ");
	scanf(" %c", &sexo);
	

	return sexo;
}

//Função para adicionar um pais ao piloto que está sendo cadastrado
//Aqui recebemos um contador para não misturar os índices, pois o retorno de char em função necessita de outras funções
//Utilizando de um 'flag' para transmitir que uma condição foi cumprida
//Foi preferido ultilizar scanf em vez de fgets, pela praticidade de não ter que se preocupar com o caractere '\n' ao final
char adicionar_pais_piloto(int contadorPiloto, Pilotos *pais_do_piloto){
	char pais[200], paises_predefinidos[100][100]= {"Brasil", "Holanda", "Mexico", "Monaco","Espanha", "Finlandia", "Franca", "Dinamarca", "Australia", "Alemanha", "Japao", "Canada", "China", "Tailandia"};
	int i=0, flag=0;
	
	do{
		fflush(stdin);
		
		printf("\nInforme o país do piloto de acordo com os países abaixo!\n");
		printf("Países disponíveis:\n\n");
		for(i = 0; i < 14; i++) {
		     printf("%s -- ", paises_predefinidos[i]);
          }
		printf("\n\nDigite o pais de origem do piloto: ");
		scanf("%s", &pais);
		
		for(i=0;i<16;i++){
			if(strcmp(pais,paises_predefinidos[i]) == 0){
				flag=1;
			}	
		}	
	}while(flag==0);
	
	strcpy(pais_do_piloto[contadorPiloto].pais_piloto , pais);
		
	return pais_do_piloto[contadorPiloto].pais_piloto;
}

//Função para a criação de id's para circuitos
//Tendo o devido cuidado para não repetir o id, e também que seja informado apenas uma vez um circuito
int  verificar_circuito(Circuitos *id_do_circuito){
	int idCircuito=0, contadorCircuito=0;
		
		if(id_do_circuito[0].id_circuito == 0){
     		fflush(stdin);
     		printf("Informe qual é o código de identificação de um primeiro circuito: ");
     		scanf("%d", &idCircuito);
		}else{
			idCircuito = idCircuito + id_do_circuito[0].id_circuito + 1;
		}	
		
	return idCircuito;
}

//Função para adicionar um nome ao circuito que está sendo cadastrado
//Aqui recebemos um contador para não misturar os índices, pois o retorno de char em função necessita de outras funções
//Foi preferido ultilizar scanf em vez de fgets, pela praticidade de não ter que se preocupar com o caractere '\n' ao final
char adicionar_nome_do_circuito(int contadorCircuito , Circuitos *nome_do_circuito){
	char nome_circuito[100];
	
	fflush(stdin);
	printf("Digite o nome do circuito: ");
	scanf("%[^\n]s", nome_circuito);
	
	strcpy(nome_do_circuito[contadorCircuito].nome_circuito , nome_circuito);
	
	return nome_do_circuito[contadorCircuito].nome_circuito;
}

//Função para adicionar um nome ao circuito que está sendo cadastrado
//Aqui recebemos um contador para não misturar os índices, pois o retorno de char em função necessita de outras funções
//Utilizando de um 'flag' para transmitir que uma condição foi cumprida
//Foi preferido ultilizar scanf em vez de fgets, pela praticidade de não ter que se preocupar com o caractere '\n' ao final
char adicionar_pais_circuito(int contadorCircuito, Circuitos *pais_do_circuito){
	char pais[30], paises_predefinidos[20][20]= {"Brasil", "Holanda", "Mexico", "Monaco","Espanha", "Finlandia", "Franca", "Dinamarca", "Australia", "Alemanha", "Japao", "Canada", "China", "Tailandia"};
	int i=0, flag=0;
	
	do{
		fflush(stdin);
		printf("Digite de que pais o circuito faz parte: ");
		scanf("%s", &pais);
		
		for(i=0;i<16;i++){
			if(strcmp(pais,paises_predefinidos[i]) == 0){
				flag=1;
			}	
		}
          		
	}while(flag==0);
	
	strcpy(pais_do_circuito[contadorCircuito].pais_circuito , pais);
	
	return pais_do_circuito[contadorCircuito].pais_circuito;
}

//Função para a criação da quilometragem dos circuitos
float  tamanho_circuito(Circuitos *tamanho_do_circuitos){
	float tamanho_circuito;

	fflush(stdin);
	printf("Digite, em quilomêtros o tamanho desse circuito: ");
	scanf("%f", &tamanho_circuito);
	
	return tamanho_circuito;
}

//Funçãp para fazer a criação de um id para as melhores voltas
//Tendo o devido cuidado para que não se repita tal id
int verificar_id_voltas(Melhor_volta *id_da_volta){
	int idVolta=0, contador=0;
	
	do{
		fflush(stdin);
		printf("Qual é o código de identificação dessa volta: ");
		scanf("%d", &idVolta);
		
		for(contador = 0; contador < MAX_CIRCUITO; contador++) {
               if(idVolta == id_da_volta[contador].id_volta) {
                    printf("Identificador do número inválido, número repetido!\n ");
                    break;
              }
          }
          
		}while(idVolta == id_da_volta[contador].id_volta);
		
		return idVolta;
}

//Função para fazer a validação se existe um piloto com um id informado pelo usuário
int validar_piloto(Pilotos *validar_id_piloto){
	int idPiloto=0, contador=0;
	
	do{
		fflush(stdin);
		printf("Qual é o id do piloto: ");
		scanf("%d", &idPiloto);
		
		for(contador=0; contador<MAX_PILOTO;contador++){
			if(idPiloto==validar_id_piloto[contador].id_piloto){
				return idPiloto;
			}
		}
	} while (idPiloto != validar_id_piloto[contador].id_piloto);
}

//Função para fazer a validação se existe um circuito com um id informado pelo usuário
Circuitos validar_circuito(Circuitos *validar_id_circuito){
	int idCircuito=0, contador=0;
	Circuitos circuito;
	
	do{	
		fflush(stdin);
		printf("Qual é o id do circuito: ");
		scanf("%d", &idCircuito);

		for(contador = 0; contador < MAX_CIRCUITO; contador++) {
               if(idCircuito == validar_id_circuito[contador].id_circuito){
               		circuito = validar_id_circuito[contador];
                    printf("Identificador do circuito válido! n");
                    break;
			   }
          }
	} while (idCircuito != validar_id_circuito[contador].id_circuito);
	
	return circuito;
}

//Função para adicionar um nome de uma equipe a melhor volta que está sendo cadastrada
//Aqui recebemos um contador para não misturar os índices, pois o retorno de char em função necessita de outras funções
//Foi preferido ultilizar scanf em vez de fgets, pela praticidade de não ter que se preocupar com o caractere '\n' ao final
char adicionar_nome_equipe_piloto(Melhor_volta *nome_equipe_piloto, int j){
	char nome[50];
	
	fflush(stdin);
	printf("Digite o nome da equipe do piloto: ");
	fgets(nome, 50, stdin);
	
	strcpy(nome_equipe_piloto[j].nome_equipe_do_piloto , nome);
	
	return nome_equipe_piloto[j].nome_equipe_do_piloto;
}

//Função diferente das que foram vista até agora, pois é uma função do tipo struct, burlando funções "normais" pois de certa forma tem o retorno de mais de um dado
//Função para fazer a inclusão do tempo que um piloto gastou em uma volta de um circuito
Tempo tempoCircuito(){
	Tempo tempoAuxiliar;
	
	fflush(stdin);
	printf("Digite o tempo da volta em minutos: ");
	scanf("%d", &tempoAuxiliar.minutos);
	
	fflush(stdin);
	printf("Digite o tempo da volta em segundos: ");
	scanf("%d", &tempoAuxiliar.segundos);
	
	fflush(stdin);
	printf("Digite o tempo da volta em milisegundos: ");
	scanf("%d", &tempoAuxiliar.milisegundos);
	
	return tempoAuxiliar;
}

//Função diferente das que foram vista até agora, pois é uma função do tipo struct, burlando funções "normais" pois de certa forma tem o retorno de mais de um dado
//Para ter certeza que um determinado circuito está recebendo de fato a volta recorde feita por um determinado piloto
//Sendo assim necessário que se receba um id
Tempo valida_menor_tempo(Circuitos circuito, int id_melhor_piloto){
	Tempo tempo_menor;
	tempo_menor = tempoCircuito();
	
	if(tempo_menor.minutos<circuito.melhor.tempo.minutos){
		circuito.melhor.tempo = tempo_menor;
		circuito.id_melhor_piloto = id_melhor_piloto;
	}else if(tempo_menor.minutos==circuito.melhor.tempo.minutos && tempo_menor.segundos<circuito.melhor.tempo.segundos){
		circuito.melhor.tempo = tempo_menor;
		circuito.id_melhor_piloto = id_melhor_piloto;
	}else if(tempo_menor.segundos==circuito.melhor.tempo.segundos && tempo_menor.milisegundos<circuito.melhor.tempo.milisegundos){
		circuito.melhor.tempo = tempo_menor;
		circuito.id_melhor_piloto = id_melhor_piloto;
	}
	
	return tempo_menor;
}

//Função diferente das que foram vista até agora, pois é uma função do tipo struct, burlando funções "normais" pois de certa forma tem o retorno de mais de um dado
//Função para fazer a inclusão da data que um piloto realizou uma volta rápida em um circuito
Data dataCircuito(){
	Data dataAuxiliar;
	
	fflush(stdin);
	printf("Digite o dia,no formato DD, que foi realizado o circuito: ");
	scanf("%d", &dataAuxiliar.data_dia);
	
	fflush(stdin);
	printf("Digite o mês, no formato MM,que foi realizado o circuito: ");
	scanf("%d", &dataAuxiliar.data_mes);
	
	fflush(stdin);
	printf("Digite o ano,no formato AAAA, que foi realizado o circuito: ");
	scanf("%d", &dataAuxiliar.data_ano);
	
	return dataAuxiliar;
}

//Função diferente das que foram vista até agora, pois é uma função do tipo struct, burlando funções "normais" pois de certa forma tem o retorno de mais de um dado
//Para ter certeza que um determinado circuito está realizando de fato uma única volta rápida no dia
//Sendo assim necessário que se receba o id do piloto, por exemplo
Data validar_data(Circuitos circuito, int id_melhor_piloto/* int j*/){
	Data data_unica;
	char sair_melhor_volta;
	
	do{
	     
	data_unica = dataCircuito();
	
	if(data_unica.data_dia == circuito.melhor.data.data_dia && data_unica.data_mes == circuito.melhor.data.data_mes && data_unica.data_ano == circuito.melhor.data.data_ano && circuito.id_melhor_piloto == id_melhor_piloto){
		fflush(stdin);
		printf("Esse piloto não pode realizar duas melhores voltas no mesmo dia!\n Deseja sair cancelar esse cadastro de melhor volta? S-Sim");
		scanf("%c", &sair_melhor_volta);
		//ajuda
//		printf("%d", melhor_volta[j].id_piloto);
//		melhor_volta[j].id_piloto = 0;
//		melhor_volta[j].id_circuito = 0;
//		melhor_volta[j].tempo.minutos = 0;
//		melhor_volta[j].tempo.segundos = 0;
//		melhor_volta[j].tempo.milisegundos = 0;
//		melhor_volta[j].data = 0;
//		melhor_volta[j].tempo.minutos = 0;
//		melhor_volta[j].tempo.minutos = 0;
	}
     else{
		return data_unica;
	}
	
	}while(data_unica.data_dia == circuito.melhor.data.data_dia && data_unica.data_mes == circuito.melhor.data.data_mes && data_unica.data_ano == circuito.melhor.data.data_ano || sair_melhor_volta !='s');
}

//Função para realizar a validação do piloto que o usuário dígitou
//Ver se de fato existe um piloto com aquele id
int validar_contador_piloto(Pilotos *validar_id_piloto){
	int idPiloto=0, contador=0;
	
	do
	{
		fflush(stdin);
		printf("Qual é o id do piloto: ");
		scanf("%d", &idPiloto);
		
		for(contador=0; contador<MAX_PILOTO;contador++){
			if(idPiloto==validar_id_piloto[contador].id_piloto){
				return contador;
			}
		}
	} while (idPiloto != validar_id_piloto[contador].id_piloto);
}

//Função para realizar a validação do circuito que o usuário dígitou
//Ver se de fato existe um circuito com aquele id
int validar_contador_circuito(Circuitos *validar_id_circuito){
	int idCircuito=0, contador=0;
	
	do{
		fflush(stdin);
		printf("Qual é o id do circuito: ");
		scanf("%d", &idCircuito);
		
		for(contador=0; contador<MAX_CIRCUITO;contador++){
			if(idCircuito==validar_id_circuito[contador].id_circuito){
				return contador;
			}
		}
	} while (idCircuito != validar_id_circuito[contador].id_circuito);
}

//Função para realizar a validação de uma melhor volta que o usuário dígitou
//Ver se de fato existe uma melhor volta com aquele id
int validar_contador_voltas(Melhor_volta *validar_id_volta){
	int idVolta=0, contador=0;
	
	do{
		fflush(stdin);
		printf("Qual é o id da volta: ");
		scanf("%d", &idVolta);
		
		for(contador=0; contador<MAX_CIRCUITO;contador++){
			if(idVolta==validar_id_volta[contador].id_volta){
				return contador;
			}
		}
	} while (idVolta != validar_id_volta[contador].id_volta);
}

//Tempo tempo_verificar(){
//	Tempo tempo_verificar;
//	tempo_verificar = tempoCircuito();
//	
//	
//	
//	
//}

//Função para realizar a verificação de um nome de piloto que o usuário dígitou
//Ver se de fato existe o nome
int validar_nome_piloto(Pilotos *validar_nome_piloto){
	int contador=0;
	char nomePiloto[120];
	
		
	fflush(stdin);
	printf("Qual é o nome do piloto que será verificado: ");
	scanf("%[^\n]s", &nomePiloto);
	
	for(contador=0; contador<MAX_PILOTO;contador++){
		if(strcmp(nomePiloto,validar_nome_piloto[contador].nome_piloto)==0){
			
			return contador;
		}
          else{
			printf("Não existe pilotos cadastrados com esse nome.");
			break;
		}
	}	
}

//Função para realizar a verificação de um nome de circuito que o usuário dígitou
//Ver se de fato existe o nome
int validar_nome_circuito(Circuitos *validar_nome_circuito){
	int contador=0;
	char nomeCircuito[100];
		
	fflush(stdin);
	printf("Qual é o nome do circuito que será verificado: ");
	scanf("%[^\n]s", &nomeCircuito);
	
	for(contador=0; contador<MAX_CIRCUITO;contador++){
		if(strcmp(nomeCircuito,validar_nome_circuito[contador].nome_circuito)==0){
			return contador;
		}
          else{
			printf("Não existe circuitos cadastrados com esse nome.");
			break;
		}
	}	
}
