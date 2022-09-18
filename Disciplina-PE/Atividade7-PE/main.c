#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declarando a Constante.
#define NUMERO_PESSOAS 10
#define QT_VEICULOS 2

int main(void) {
     setlocale(LC_ALL, "Portuguese");
     system("color F");
     printf("Atividade da Ficha Formulário\n");
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
     // Declaração da variável para utilizar a estrutura.
     struct Usuario usuario_dados[NUMERO_PESSOAS];
     
     
     int contador = 0, contador_carros = 0;
     // O Loop de repetição for irá fazer as perguntas de acordo com a quantidade da minha constante.
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
          
          printf("Informe o mês de nascimento: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].mes_nascimento);
          
          printf("Informe o ano de nascimento: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].ano_nascimento);
          
          printf("Informe seu cnpj: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].cnpj);
          
          printf("\nInsira seus contatos nos respectivos campos abaixo:\n");
          printf("Informe o número do seu telefone móvel: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].telefone_usuario);
          
          printf("Informe o número do seu telefone fixo: ");
          fflush(stdin);
          scanf("%d", &usuario_dados[contador].telFixo_usuario);
          
          printf("Informe o seu e-mail: ");
          fflush(stdin);
          fgets(usuario_dados[contador].email, 30, stdin);
          
          printf("\nInforme seu endereço nos campos abaixo respectivamente\n");
          printf("Informe seu indereço: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].endereco, 30, stdin);
          
          printf("Informe o complemento: ");
          fflush(stdin);
          fgets(usuario_dados[contador].usuario_endereco[contador].complemento, 30, stdin);
          
          printf("Informe o número: ");
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
          
          
          printf("\n\n===================== Confirmação dos dados do usuário abaixo =====================\n");
          printf("Nome Completo: %s", usuario_dados[contador].nome_completo);
          printf("Nome Social: %s", usuario_dados[contador].nome_social);
          printf("CPF: %d", usuario_dados[contador].cpf);
          printf("\nNacionalidade: %s", usuario_dados[contador].nacionalidade);
          printf("Dia Nascimento: %d", usuario_dados[contador].dia_nascimento);
          printf("\nMês Nascimento: %d", usuario_dados[contador].mes_nascimento);
          printf("\nAno nascimento: %d", usuario_dados[contador].ano_nascimento);
          printf("\nCNPJ: %d", usuario_dados[contador].cnpj);
          printf("\nTelefone Móvel: %d", usuario_dados[contador].telefone_usuario);
          printf("\nTelefone Fixo: %d", usuario_dados[contador].telFixo_usuario);
          printf("\nE-mail: %s", usuario_dados[contador].email);
          
          
          printf("\n===================== Confirmação dos dados de indereço abaixo =====================\n");
          printf("Endereço: %s", usuario_dados[contador].usuario_endereco[contador].endereco);
          printf("Complemento: %s", usuario_dados[contador].usuario_endereco[contador].complemento);
          printf("Número: %d", usuario_dados[contador].usuario_endereco[contador].numero);
          printf("\nCEP: %d", usuario_dados[contador].usuario_endereco[contador].cep);
          printf("\nBairro: %s", usuario_dados[contador].usuario_endereco[contador].bairro);
          printf("Estado: %s", usuario_dados[contador].usuario_endereco[contador].estado);
          
          
          // Este segundo Loop irá solicitar os dados do veículo.
          for(contador_carros = 0; contador_carros < QT_VEICULOS; contador_carros++) {
               printf("\nInsira os dados dos seus veículos nos campos abaixo respectivamente\n");
               printf("Informe a placa do %dº veículo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa, 8, stdin);  
               
               printf("Informe o modelo do seu %dº veículo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo, 30, stdin);  
               
               printf("Informe o ano do seu %dº veículo: ", contador_carros + 1);
               fflush(stdin);
               scanf("%d", &usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano);
             
               printf("Informe a cor do seu %dº veículo: ", contador_carros + 1);
               fflush(stdin);
               fgets(usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor, 10, stdin);
               
               
               printf("\n===================== Confirmação dos dados dos veículos abaixo =====================\n"); 
               printf("A placa do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa);
               printf("O modelo do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo);
               printf("O ano do seu %dº veículo é: %d", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano); 
               printf("\nA cor do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor);
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
          printf("\nMês Nascimento: %d", usuario_dados[contador].mes_nascimento);
          printf("\nAno nascimento: %d", usuario_dados[contador].ano_nascimento);
          printf("\nCNPJ: %d", usuario_dados[contador].cnpj);
          printf("\nTelefone Móvel: %d", usuario_dados[contador].telefone_usuario);
          printf("\nTelefone Fixo: %d", usuario_dados[contador].telFixo_usuario);
          printf("\nE-mail: %s", usuario_dados[contador].email);
          
          printf("Endereço: %s", usuario_dados[contador].usuario_endereco[contador].endereco);
          printf("Complemento: %s", usuario_dados[contador].usuario_endereco[contador].complemento);
          printf("Número: %d", usuario_dados[contador].usuario_endereco[contador].numero);
          printf("\nCEP: %d", usuario_dados[contador].usuario_endereco[contador].cep);
          printf("\nBairro: %s", usuario_dados[contador].usuario_endereco[contador].bairro);
          printf("Estado: %s", usuario_dados[contador].usuario_endereco[contador].estado);
          
          printf("A placa do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].placa);
          printf("O modelo do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].modelo);
          printf("O ano do seu %dº veículo é: %d", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].ano); 
          printf("\nA cor do seu %dº veículo é: %s", contador_carros + 1, usuario_dados[contador].usuario_veiculo[QT_VEICULOS].cor);

*/
