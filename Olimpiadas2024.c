#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200


char login [ 30 ]; 
char senha [ 30 ]; 
char nome[50];
char modalidade_olimpica  [70];
char Pais [SIZE][70];
char Equipe_olimpica  [200];
char Data_da_Atividade [200];
char Ginastica [100];
char Natacao[100];
char Polo_Aquatico[100];
char Atletismo[100] ;
char Medalhas [80];
char Ranqueamento[200];
char Calendario [140];
char Controle_covid [150];
char email [50];
char Pais_de_origem [SIZE][70];
char Local_que_vai_acontecer_o_esporte  [SIZE][70];
char Equipamentos_Necessarios [SIZE] [150];
char Agendamento_de_local_para_o_treinamento [SIZE] [60];
char Medicos_e_respectivas_equipes  [70];
char Cadastro_dos_Funcionarios [50];
char Cadastro_dos_Voluntarios  [70];
char Cadastro_dos_Atletas  [70];
char Cadastro_do_alojamento [SIZE][70];
char Cadastro_do_local [70];
char Cadastro_de_equipamentos [70];
char Cadastro_de_agendamento [70];
char Cadastro_de_Medicos [70];
char cpf [20];

int op;
void menu();
void menu_login();
void menu_relatorio();
void menu_cadastro();
void logi();
void Cale();
void Meda();
void Ranq();
void Gina();
void Nata();
void Polo();
void Atle();
void Atletas();
void Medicos();
void Funcionarios();
void Alojamento();
void Voluntarios ();
void Local();
void Equipamentos();
void Agendamento();

int main(){
	menu();
	menu_relatorio();
	menu_cadastro();
	logi();
	Cale();
	Meda();
	Ranq();
	Gina();
	Nata();
	Polo();
	Atle();
	Atletas();
	Medicos();
	Funcionarios();
	Alojamento();
	Voluntarios();
	Local();
	Equipamentos();
	Agendamento();

	
	return 0;
}



	void menu() {
	do{
	    	system("cls");
	    printf("----------  OLIMPIADAS DE 2024 ----------\n");
	    printf("----------  MENU   ----------\n");
	    printf("----------              Escolha a opcao desejada        ----------\n");
	    printf("1 - Tela de Login\n");
		printf("2 - Tela de Cadastro\n");
		printf("3 - Tela de Relatorios\n");
	    printf("4 - Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    	   	menu_login();
	    		break;
	    	case 2:
	    		menu_cadastro();
	    		break;
	    	case 3:
	    		menu_relatorio();
	    		break; 
            case 4:
	    		system("exit"); 
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

	}while(op!=4); 
}
void menu_login(){
	do{
	    	system("cls");
	    printf("----------  OLIMPIADAS DE 2024 ----------\n");
	    printf("----------  LOGIN   ----------\n");
	    printf("----------              Escolha a opcao desejada        ----------\n");
	    printf("1 - Fazer Login \n");
	    printf("2 - Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    	   	logi();
	    		break;
            case 2:
	    		system("exit"); //fecha janela
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

	}while(op!=2); //se opção for diferente de 4 ( c n quiser sair) igual a 4 sai do prog
}

void logi(){
	static int linha;

	do{
	
	   printf("\n\t\tOLIMPIADAS 2024\n\n");
    printf("\n\t\tEfetue o login para entrar em sua conta:\n\n");
    
    
    	printf("\nDigite seu login: ");
		scanf("%s" , &login[linha]);
		printf("\nDigite sua senha: ");
		scanf("%s" , &senha[linha]);
        printf ( " Usuário logado " );
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		

    }while(op==1);


}





	void menu_cadastro() {
	do{
	    	system("cls");
	    printf("----------  OLIMPIADAS DE 2024 ----------\n");
	    printf("----------  SISTEMA DE CADASTRO   ----------\n");
	    printf("----------              Escolha a opcao desejada        ----------\n");
	    printf("1 - Cadastro dos Atletas \n");
		printf("2 - Cadastro dos medicos\n");
		printf("3 - Cadastro dos funcionarios\n");
		printf("4 - Cadastro dos  voluntarios\n");
		printf("5 - cadastro de alojamento dos atletas\n");
	    printf("6 - Cadastro do local dos esportes olimpicos  \n");
	    printf("7 - Esquipamentos Necessarios\n");
		printf("8 - Agendamento do local para treinamento\n");
	    printf("9 - Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    	   	Atletas();
	    		break;
	    	case 2:
	    		Medicos();
	    		break;
	    	case 3:
	    		Funcionarios();
	    		break; 
	    	case 4:
	    		Voluntarios();
	    	case 5:
	    		Alojamento();
	    	    break;
	    	case 6:
	    		Local();
	    	    break;
	    	case 7:
	    		Equipamentos();
	    	    break;
	    	case 8:
	    		Agendamento();
	    	    break;
            case 9:
	    		system("exit"); //fecha janela
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

	}while(op!=9); //se opção for diferente de 4 ( c n quiser sair) igual a 4 sai do prog
}
void Atletas() {
	static int linha;
	do{
		printf("\nDigite o nome: ");
		scanf("%s" , &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%s", &cpf [linha]); 
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
	 printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
	}while(op==1);
} 
void Medicos() {
	static int linha;
	do{
		printf("\nDigite o nome: ");
		scanf("%s" , &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%s", &cpf [linha]); 
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
	 printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++;
	}while(op==1);
} 


void cadastro() {
	static int linha;
	
	

	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%s", &cpf [linha]); 
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		 printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
	}while(op==1);
}

void Voluntarios() {
	static int linha;
	
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%s", &cpf [linha]); 
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
	}while(op==1);
} 
void Local() {
	static int linha;

	do{
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nDigite o Local de treinamento: ");
		scanf("%s", Local_que_vai_acontecer_o_esporte[linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
		
	
	}while(op==1);
} 
void Alojamento() {
	static int linha;

	do{
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nDigite a quantidade de pessoas da sua equipe: ");
		scanf("%s", Cadastro_do_alojamento[linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
		
	
	}while(op==1);
}
void Equipamentos() {
	static int linha;
	static int lista;

	do{
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]); 
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nDigite os equipamentos que sua esquipe vai utilizar: 1- Equipamentos para ginastica  2- Equipamentos para futebol  3- Equipamentos para polo aquatico 5-Equipamentos para Atletismo 6-Equipamentos para ciclismo 7-Equipamentos para natacao: ");
		scanf("%s", Equipamentos_Necessarios[lista]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		printf("\nEquipamentos !!");
		 printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++; 
		
		

	
	}while(op==1);
} //fimm do castro
void Funcionarios() {
	static int linha;

	do{
		printf("\nDigite seu nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%s", &cpf [linha]);
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		 printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		
		linha++; 
		
	
	
	}while(op==1);
} 
void Agendamento() {
	static int linha;

	do{
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]); 
		printf("\nDigite o seu pais: ");
		scanf("%s", Pais_de_origem[linha]);
		printf("\nDigite o dia que sua equipe vai treinar: ");
		scanf("%s", Agendamento_de_local_para_o_treinamento[linha]);
		printf("\nLembrete: OS treinamentos são das 08:00 as 20:00!!");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nCadastro Efetuado com sucesso!!");
		printf("\nDigite 1 para continuar ou 9 para sair");
		scanf("%d",&op);
		linha++;
		
		

	
	}while(op==1);
} 


	void menu_relatorio() {
	do{
	    	system("cls");
	    printf("----------  OLIMPIADAS DE 2024 ----------\n");
	    printf("----------  RELATORIOS   ----------\n");
	    printf("----------              Escolha a opcao desejada        ----------\n");
	    printf("1 - Calendario Olimpico\n");
		printf("2 - Contagem de Medalhas com Ranqueamento\n");
		printf("3 - Medalhistas Olimpicos\n");
	    printf("4 - Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    	   	Cale();
	    		break;
	    	case 2:
	    		Ranq();
	    		break;
	    	case 3:
	    		Meda();
	    		break; 
            case 4:
	    		system("exit"); 
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

	}while(op!=4); 
}

void Cale() {


	do{
		 printf("----------  ESPORTES OLIMPICOS  ----------\n");
	    printf("----------             Escolha qual esporte voce quer vizualizar a Data      ----------\n");
		printf("1 - Ginastica\n");
		printf("2 - Natacao\n");
		printf("3 - Polo Aquatico\n");
		printf("4 - Atletismo\n");
	    printf("5 Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
   				Gina();
	    		break;
	    	case 2:
	    		Nata();
	    		break;
	    	case 3:
	    		Polo();
	    		break; 
	    	case 4:
   				Atle();
	    		break;
            case 5:
	    		system("exit"); 
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

		
		

	
	}while(op==1);
} 
void Gina() {
	static int linha;

	do{
		printf("\nData da competição: 05/07 a 25/07 Masculino e Feminino  \n");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++;
		
	
	}while(op==1);
} 

void Nata() {
	static int linha;

	do{
		printf("\nData da competição: 02/07 a 17/07 Masculino e Feminino \n ");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++;
		
	
	}while(op==1);
} 
void Polo() {
	static int linha;

	do{
		printf("\nData da competição: 05/07 a 25/07 Masculino e Feminino \n ");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++;
		
	
	}while(op==1);
} 
void Atle() {
	static int linha;

	do{
		printf("\nData da competição: 01/07 a 27/08 Masculino e Feminino  ");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++;
		
	
	}while(op==1);
} 
void Ciclismo() {
	static int linha;

	do{
		printf("\nData da competição: 24/07 a 07/08 Masculino e Feminino  \n");
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++;
		
	
	}while(op==1);
} 

void Ranq() {
		printf("----------  CONTAGEM DE MEDALHAS OLIMPICAS  ----------\n");
	    
		printf("1 Brasil - 39 ouro 41 Prata 33 Bronze Total:113 \n" );
		printf("2 Estados Unidos 38 ouro 32 Prata 18 Bronze Total: 88 \n");
		printf("3 Canadá 27 ouro 14 Prata 17 Bronze Total:58 \n");
		printf("4 Italia - 22 ouro 21 Prata 22 Bronze Total:65 \n");
	    printf("5 França - 20 ouro 28 Prata 23 Bronze Total: 71 \n");
	     printf("6 Peru  - 19 ouro 24 Prata 21 Bronze Total: 64 \n");
		printf("7 Mongolia - 17 ouro 22 Prata 19 Bronze Total: 58 \n");
       printf("8 Canada - 15 ouro 20 Prata 17 Bronze Total: 52 \n");
        printf("9 Russia - 12 ouro 15 Prata 15 Bronze Total: 42 \n");
         printf("10 Japão - 10 ouro 10 Prata 14 Bronze Total: 34 \n");
          printf("11 Hungria - 9 ouro 8 Prata 12 Bronze Total: 29 \n");
		 printf("12 Corea do Sul -  5 ouro 4 Prata 10 Bronze Total: 19 \n");
        printf("\nDigite 1 para continuar ou outro valor para sair\n");
		scanf("%d",&op);
	
	

}

void Meda(){
		printf("---------- MEDALHISTAS OLIMPICOS   ----------\n");
  	  printf("----------             Escolha qual esporte você quer vizualizar a Data      ----------\n");
		printf("GINASTICA \n");
		printf("Isabela Nogueira - Brasil - Ginastica \n");
		printf("Vera Caslavska - Tchecoslováquia - Ginastica \n");
		printf(" Simone Biles EUA - Ginastica  \n");
		printf(" Mélanie de Jesus dos Santos - Franca - Ginastica \n");
		printf("2 - NATACAO\n");
		printf("Michael Phelps - Estados Unidos - Natacao \n");
		printf("Cesar Cielo - Brasil - Natacao \n");
		printf(" Andrea Kobe - Japao - Natacao  \n");
		printf(" Daila Rosie - Franca - Natacao \n");
		printf("3 - POLO AQUATICO\n");
		printf("Ashleigh Johnson -  Estados Unidos - Polo Aquatico\n");
		printf("Felipe Perrone - Brasil - Polo Aquatico \n");
		printf(" Dénes Varga - Hungria - Polo Aquatico \n ");
		printf(" Izabella Chiappini - Brasil - Polo Aquatico \n");
		printf("4 - ATLETISMO\n");
		printf("Antony Derwer -  Canada - Atletismo\n");
		printf("Andressa de Morais - Brasil - Atletismo \n");
		printf(" Loren lopsie - Franca - Atletismo \n ");
		printf(" Sophie Abram - Estados Unidos- Atletismo \n");
	    printf("5 Sair \n");
        printf("Selecione uma opcao: \n");
	    scanf("%d", &op);
	
	
}







