#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

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
int op;
void menu();
void Cale();
void Meda();
void Ranq();
void Gina();
void Nata();
void Polo();
void Atle();




int main(){
	menu();
	Cale();
	Meda();
	Ranq();
	Atle();
	Gina();
	Nata();
	Polo();
	

	
	return 0;
}
	void menu() {
	do{
	    	system("cls");
	    printf("----------  OLIMPIADAS DE 2024 ----------\n");
	    printf("----------  RELATORIOS   ----------\n");
	    printf("----------              Escolha a opÃ§Ã£o desejada        ----------\n");
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
	    printf("----------             Escolha qual esporte você quer vizualizar a Data      ----------\n");
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

