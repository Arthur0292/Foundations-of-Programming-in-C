#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char nomeJogo[33] = "ONIBUS";  //variaveis globais de nickname e nome do jogo e pontuacao
char nickname[33];
int pontuacao;
int cont = 0;   //contador de fases

void mainJogo();

typedef struct{     //Struct de dados de cada fase
    int quantOnibus;
    int quantLinhas;
    int quantColunas;
    char onibus;
    char termino;
    char ordemOnibus[100];
}fase;

FILE *arq; //Variavel global para o entrada.txt
fase lista[1000];   //Variaveis globais de fase
char linhaMatriz[100][100];
char lixo[100];

void limparTela() { //Funcao para limpar a tela
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void telaInicial(){
    limparTela();   //limpo a tela 

    printf("Bem vindo(a) ao Jogo do %s", nomeJogo);
    printf("\n");
    printf("\n");
    printf("Informe seu Nickname: "); // ler o nickname
    scanf("%32s", nickname);
}

int menuPrincipal(){
    limparTela();

    int opcao;  //Variavel de opcao

    printf("*** JOGO DO %s ***\n", nomeJogo);
    printf("\n");
    printf("Bem vindo(a) %s\n", nickname);
    printf("\n");

    printf("1 - Jogar\n");
    printf("2 - Instrucoes\n");
    printf("3 - Raking\n");
    printf("4 - Sair\n");
    printf("\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao); //Ler a opcao

    return opcao;   //retorna a opcao digitada
}

void telaInstrucoes(){
    limparTela();

    printf("Instrucoes sobre o jogo do %s\n", nomeJogo);    //Mostra as intrucoes sobre o jogo
    printf("\n");
    printf("aaaa\n");
    printf("\n");

    printf("Tecle <enter> para prosseguir\n");

    getchar();  //Espera a tecla enter ser digitada 
    getchar();

}

void carregarFase(){    //Funcao de carrega o dados da fase

    char c;    
    if(cont == 0){   //Abro o entrada.txt apenas uma vez
        arq = fopen("entrada.txt", "r");
    }

    fscanf(arq, "%d", &lista[cont].quantOnibus);  //Quantidade de onibus
    fscanf(arq, "%d", &lista[cont].quantLinhas);  //Quantidade de linhas
    fscanf(arq, "%d", &lista[cont].quantColunas);  //Quantidaade de colunas
    fscanf(arq, "%s", lixo);  //Le a string que e pulada

    for(int i = 0; i<lista[cont].quantLinhas; i++){ //Leio cada linha da matriz
        fscanf(arq, "%s", linhaMatriz[i]);
    }

    fscanf(arq, "%s", lista[cont].ordemOnibus); //Leio a ordem dos onibus

    fscanf(arq, " %c", &lista[cont].termino); //Leio o F ou U

    
}

void proximaFase(){  //Funcao de proxima fase
    limparTela();
    
    printf("**************************************");
    printf("**  MUITO BEM VOCE FINALIZOU A FASE **");
    printf("**                                  **");
    printf("**   Ir para a proxima fase(S/N)    **");
    printf("**************************************");

    char opcao;
    scanf("%c", &opcao);

    if(opcao == 'S' || opcao == 's'){
        mainJogo(); //Se = S continua 
    }else if(opcao == 'N'|| opcao == 'n'){  //Senao volta para o menu principal
        menuPrincipal();    
    }

}

void mainJogo(){
    limparTela();   //Limpo a tela e carrego a fase
    carregarFase();

    for(int i = 0; i<lista[cont].quantOnibus; i++){
        limparTela();
        char banco1 = ' ';  //Caracteres do banco
        char banco2 = ' ';
        char banco3 = ' ';

        while(banco1 == ' ' || banco2 == ' ' || banco3 == ' '){ //Enquanto os bancos estao vazios repete
            limparTela();
            printf("+----o--------o----+\n");
            printf("|    -    -    -   |---+\n");
            printf("|   |%c   |%c  |%c    | %c |\n", banco1, banco2, banco3, lista[cont].ordemOnibus[i]);
            printf("|    -    -    -   |---+\n");
            printf("+----o---===--o----+\n");

            printf("\n");

            int aux = 0;    //Numero de linhas
            for(int i = 0; i<lista[cont].quantLinhas; i++){
                printf("%d %s\n", aux, linhaMatriz[i]);
                aux++;
            }
            
            printf("   %s\n", lixo);//Numero de colunas
        
            printf("\n");

    
        printf("Informe a linha e coluna para embarcar no onibus: ");
        
        int linha, coluna;

        scanf("%d %d", &linha, &coluna);

        }

    }
    cont++; //Adiciono no contador de fase
    proximaFase();
    
}

int main(){

    int opcao;

    telaInicial();  //Chamo a tela inicial
    
    while(1){

        opcao = menuPrincipal();   //Chamo o menu principal

        if(opcao == 1){
            mainJogo();
        }else if(opcao == 2){
            telaInstrucoes();   //Mostra a tela de Instrucoes
        }else if(opcao == 3){
                                //Mostra o Ranking
        }else if(opcao == 4){
            break;      //Caso a opcao =  4 sai do jogo
        }else{
            printf("Opcao Invalida!\n");  //Caso nenhuma das anteriores = opcao invalida
            getchar();
            getchar();  //Espero um tecla seja digitada
        }


    }
    
    return 0;
}
