#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declarando a Constante.
#define NUMERO_PESSOAS 10
#define QT_VEICULOS 2

int main(void) {
     setlocale(LC_ALL, "Portuguese");
     system("color F");
     printf("Atividade da Ficha Formul�rio\n");
     printf("31/05/2022\n");
     
     
     // Definindo Struct.
     struct Endereco {
          char endereco[30], complemento[30], bairro[30], estado[2], cidade[30];
          int numero, cep;
     };
     
     // Definindo Struct.
     struct Veiculo {
          char placa[8], modelo[30], cor[10];
          int ano;
     };
     
     // Definindo Struct.
     struct Usuario {
          char nome_completo[30], nome_social[30], email[30], nacionalidade[30];
          int cpf, cnpj, dia_nascimento, mes_nascimento, ano_nascimento, telefone_usuario, telFixo_usuario;
          struct Endereco usuario_endereco[NUMERO_PESSOAS];
          struct Veiculo usuario_veiculo[QT_VEICULOS];
     };
     // Declara��o da vari�vel para utilizar a estrutura.
     struct Usuario usuario_dados[NUMERO_PESSOAS];
     
     
     int contador = 0, contador_carros = 0;
     // O Loop de repeti��o for ir� fazer as perguntas de acordo com a quantidade da minha constante.
     for(contador = 0; contador < NUMERO_PESSOAS; contador++) {
          printf("===================== Preencha os Campos =====================\n\n");
          printf("Informe seu nome: ");
          fflush(stdin);
          fgets(usuario_dados[contador].nome_completo, 30, stdin);
          
          printf("Informe seu nome social: ");
          fflush(stdin);
          fgets(usuario_dados[contador].nome_social, 30, stdin);
          
          printf("Informe seu CPF: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].cpf);
          
          printf("Informe sua nacionalidade: ");
          fflush(stdin);
          fgets(usuario_dados[contador].nacionalidade, 30, stdin);
          
          printf("\nInsira sua data de nascimento nos respectivos campos abaixo! \n");
          printf("Informe o dia de nascimento: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].dia_nascimento);
          
          printf("Informe o m�s de nascimento: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].mes_nascimento);
          
          printf("Informe o ano de nascimento: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].ano_nascimento);
          
          printf("Informe seu cnpj: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].cnpj);
          
          printf("\nInsira seus contatos nos respectivos campos abaixo:\n");
          printf("Informe o n�mero do seu telefone m�vel: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].telefone_usuario);
          
          printf("Informe o n�mero do seu telefone fixo: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].telFixo_usuario);
          
          printf("Informe o seu e-mail: ");
          fflush(stdin);
          fgets(usuario_dados[contador].email, 30, stdin);
          
          printf("\nInforme seu endere�o nos campos abaixo respectivamente\n");
          printf("Informe seu indere�o: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].endereco, 30, stdin);
          
          printf("Informe o complemento: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].complemento, 30, stdin);
          
          printf("Informe o n�mero: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].usuario_endereco[contador].numero);
          
          printf("Informe o CEP: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].usuario_endereco[contador].cep);
          
          printf("Informe o bairro: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].bairro, 30, stdin);
          
          printf("Informe o estado: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].estado, 30, stdin);
          
          
          printf("\n\n===================== Confirma��o dos dados do usu�rio abaixo =====================\n");
          printf("Nome Completo: %s", usuario_dados[contador].nome_completo);
          printf("Nome Social: %s", usuario_dados[contador].nome_social);
          printf("CPF: %d", usuario_dados[contador].cpf);
          printf("\nNacionalidade: %s", usuario_dados[contador].nacionalidade);
          printf("Dia Nascimento: %d", usuario_dados[contador].dia_nascimento);
          printf("\nM�s Nascimento: %d", usuario_dados[contador].mes_nascimento);
          printf("\nAno nascimento: %d", usuario_dados[contador].ano_nascimento);
          printf("\nCNPJ: %d", usuario_dados[contador].cnpj);
          printf("\nTelefone M�vel: %d", usuario_dados[contador].telefone_usuario);
          printf("\nTelefone Fixo: %d", usuario_dados[contador].telFixo_usuario);
          printf("\nE-mail: %s", usuario_dados[contador].email);
          
          
          printf("\n===================== Confirma��o dos dados de indere�o abaixo =====================\n");
          printf("Endere�o: %s", usuario_dados[contador].usuario_endereco[contador].endereco);
          printf("Complemento: %s", usuario_dados[contador].usuario_endereco[contador].complemento);
          printf("N�mero: %d", usuario_dados[contador].usuario_endereco[contador].numero);
          printf("\nCEP: %d", usuario_dados[contador].usuario_endereco[contador].cep);
          printf("\nBairro: %s", usuario_dados[contador].usuario_endereco[contador].bairro);
          printf("Estado: %s", usuario_dados[contador].usuario_endereco[contador].estado);
          
          
          // Este segundo Loop ir� solicitar os dados do ve�culo.
          for(contador_carros = 0; contador_carros < QT_VEICULOS; contador_carros++) {
               printf("\nInsira os dados dos seus ve�culos nos campos abaixo respectivamente\n");
               printf("Informe a placa do %d� ve�culo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa, 8, stdin);  
               
               printf("Informe o modelo do seu %d� ve�culo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo, 30, stdin);  
               
               printf("Informe o ano do seu %d� ve�culo: ", contador_carros + 1);
               fflush(stdin);
               scanf("%d", &usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano);
             
               printf("Informe a cor do seu %d� ve�culo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor, 10, stdin);
               
               
               printf("\n===================== Confirma��o dos dados dos ve�culos abaixo =====================\n"); 
               printf("A placa do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa);
               printf("O modelo do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo);
               printf("O ano do seu %d� ve�culo �: %d", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano); 
               printf("\nA cor do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor);
          }
          
          
          printf("\n\n");
          system("pause");
          system("cls");
          
     }
	return 0;
}

/*
          
          printf("Nome Completo: %s", usuario_dados[contador].nome_completo);
          printf("Nome Social: %s", usuario_dados[contador].nome_social);
          printf("CPF: %d", usuario_dados[contador].cpf);
          printf("\nNacionalidade: %s", usuario_dados[contador].nacionalidade);
          printf("Dia Nascimento: %d", usuario_dados[contador].dia_nascimento);
          printf("\nM�s Nascimento: %d", usuario_dados[contador].mes_nascimento);
          printf("\nAno nascimento: %d", usuario_dados[contador].ano_nascimento);
          printf("\nCNPJ: %d", usuario_dados[contador].cnpj);
          printf("\nTelefone M�vel: %d", usuario_dados[contador].telefone_usuario);
          printf("\nTelefone Fixo: %d", usuario_dados[contador].telFixo_usuario);
          printf("\nE-mail: %s", usuario_dados[contador].email);
          
          printf("Endere�o: %s", usuario_dados[contador].usuario_endereco[contador].endereco);
          printf("Complemento: %s", usuario_dados[contador].usuario_endereco[contador].complemento);
          printf("N�mero: %d", usuario_dados[contador].usuario_endereco[contador].numero);
          printf("\nCEP: %d", usuario_dados[contador].usuario_endereco[contador].cep);
          printf("\nBairro: %s", usuario_dados[contador].usuario_endereco[contador].bairro);
          printf("Estado: %s", usuario_dados[contador].usuario_endereco[contador].estado);
          
          printf("A placa do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa);
          printf("O modelo do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo);
          printf("O ano do seu %d� ve�culo �: %d", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano); 
          printf("\nA cor do seu %d� ve�culo �: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor);

*/
