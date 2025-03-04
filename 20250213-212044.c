#include <stdio.h> //biblioteca de comunicacao com o usuario 
#include <stdlib.h> //biblioteca de alocação de espaço em memória 
#include <locale.h> //biblioteca de alocação de texto por região 
#include <string.h> // biblioteca responsavel por cuidar das string
   int registro()
   {
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   
   printf("digite o cpf a ser cadastrado!\n");
   scanf("%s", cpf);
   
   strcpy(arquivo, cpf); // responsavel por copiar os valores das string
   
   FILE *file; // cria o aquivo
   file = fopen(arquivo, "w"); // cria o arquivo 
   fprintf(file,cpf); //salva o valor da variável 
   fclose(file); //fecha o arquivo 
   file = fopen (arquivo, "a");
   fprintf(file, ".");
   fclose(file);
   
   printf("digite o nome a ser cadastrado:");
   scanf("%s", nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   file = fopen (arquivo, "a");
   fprintf(file, ".");
   fclose(file);
   
   printf("digite o sobrenome a ser cadastrado;");
   scanf("%s", sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
   
   
   file = fopen (arquivo, "a");
   fprintf(file, ".");
   fclose(file);
   
   printf("digite o cargo a ser cadastrado:");
   scanf("%s", cargo);
   
   file =fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
  
     }
   
   int consulta()
   {
   setlocale(LC_ALL, "portuguese"); //definindo a liguagem 
   
    char cpf[4];
    char conteudo[200];
    
    printf("digite o CPF a ser consultado:");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    { 
    printf("nao foi possível abrir o arquivo, nâo localizado!\n");
    }
    while (fgets(conteudo, 200, file) != NULL) 
    { 
    
    printf("\nEssas sao as informações do usuário:");
    printf("%s", conteudo);
    printf("\n\n");
    }
    
    system("pause");
    
   }
   
   int deletar()
   {
   printf("voce escolheu deletar nomes!\n");
   system("pause");
   }
    
   int main()
   {
   
       int opcao = 0; //definindo variáveis
       int laco= 1;
   
       while (laco == 1) {
   
       system("cls");
       
       setlocale(LC_ALL, "portuguese"); //definindo a liguagem 
   
       printf("### Cartório da ebac ### \n\n"); //início do menu 
       printf("escolha a opcao desejada do menu\n\n");
       printf("\t1 - registrar nomes\n");
       printf("\t2 - consultar nomes\n");
       printf("\t3 - deletar nomes\n");
       printf("opcao:"); //fim do menu 
       
       scanf("%d" , &opcao); // armazenando a escolha do usuário 
       
       system("cls");
       
       switch(opcao)   {
       case 1:
      registro();
       break;
       
       case 2:
       consulta();
       break;
       
       case 3:
       deletar();
       break;
       
       case 4:
       printf("saindo do programa...\n");
       laco = 0; //altera a condição do loop para sair
       break;
       
       default:
       printf("essa opcao nao esta disponível\n");
       system("pause");
       break;
     
       }
       
     }    
       return 0;
   }    
       
 