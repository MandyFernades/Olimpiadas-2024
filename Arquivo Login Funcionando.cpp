#include <stdio.h>
#include <stdlib.h>
#include <string.h>





typedef  struct {
    char login [ 30 ]; 
    char senha [ 30 ]; 
} pessoa; pessoa p [ 0 ]; 


// pessoa[5]


int  main () {
	

void menu (){
	printf("----------  OLIMPIADAS DE 2024 ----------\n");
	printf("----------  Tela de Menu   ----------\n");				
	printf("----------    Escolha a opcao desejada        ----------\n");
	printf("\t1-Tela de Login: 1 \n");
	printf("\t2-Tela de Cadastros: 2 \n");
	printf("\t3-Tela de Relatorio: 3 \n");
	printf("\t4-Consultas: 4 \n");
	printf("\t5-Area de Gerenciamento: 5 \n");
	printf("\6-Sair:  6\n\n");

}

char ler_opcao(){
    char op;
    int valido = 0;
    while(valido == 0){
        scanf (" %c", &op);
        switch(op){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5 ':
            case '6':
            //valido = 1;
            return op;
        default:
            printf("Opcao invalida!\n\n");
            menu();
        }

    }
}


int main (){
    char op;
    menu();
    op = ler_opcao();

    // implementacao aqui
    printf("a opcao escolhida foi %c:", op );

}
    char login  [ 30 ]; 
    char senha [ 30 ]; 
    
    
    printf("\n\t\tOLIMPIADAS 2024\n\n");
    printf("\n\t\tEfetue o login para entrar em sua conta:\n\n");
    

    strcpy(p[0].login,"Allyson"); 
    strcpy(p[0].senha,"123"); 
    
    strcpy(p[1].login,"Sandra"); 
    strcpy(p[1].senha,"146"); 
    
    strcpy(p[2].login,"Luiz"); 
    strcpy(p[2].senha,"156"); 
    
    strcpy(p[3].login,"Marcos"); 
    strcpy(p[3].senha,"164"); 
    
    strcpy(p[4].login,"Amanda"); 
    strcpy(p[4].senha,"159"); 
      
    
    printf ( " \nlogin: " );
    scanf ( "%s" , login); 

    printf ( " \nsenha: " );
    scanf ( "%s" , senha); 

    if (( strcmp (login, p [ 0 ]. login ) == 0 ) && ( strcmp (senha, p [ 0 ]. senha ) == 0 )) { 
        printf ( " Usuário logado " );
    } else {
        printf ( " Login e / ou senha incorretos " ); 
    }
    return  0 ;
}
