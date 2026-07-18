#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char nomeJogo[33] = "ONIBUS";  //Variavel global de nome do jogo
int cont = 0;   //contador de fases
int perdeu = 0;
int qntRanking = 0;//Contador de pessoas do raking

void mainJogo();

typedef struct{     //Struct do nikname e pontuacao
    char nickname[33];
    int pontuacao;
}ranking;

ranking jogador[10000];

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
char linhaMatriz[1000][1000];
char lixo[100];

void limparTela() { //Funcao para limpar a tela
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void telaInicial(){
    limparTela();

    printf("Bem vindo(a) ao Jogo do %s", nomeJogo);
    printf("\n");
    printf("\n");
    printf("Informe seu Nickname: "); // ler o nickname
    scanf("%32s", jogador[qntRanking].nickname);
}

int menuPrincipal(){
    limparTela();

    int opcao;  //Variavel de opcao

    printf("*** JOGO DO %s ***\n", nomeJogo);
    printf("\n");
    printf("Bem vindo(a) %s\n", jogador[qntRanking].nickname);
    printf("\n");

    printf("1 - Jogar\n");
    printf("2 - Configuracões\n");
    printf("3 - Instrucoes\n");
    printf("4 - Raking\n");
    printf("5 - Sair\n");
    printf("\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao); //Ler a opcao

    return opcao;   //retorna a opcao digitada
}

void telaInstrucoes(){
    limparTela();

    printf("Instrucoes sobre o jogo do %s\n", nomeJogo);    //Mostra as intrucoes sobre o jogo
    printf("\n");
    printf("Objetivo do jogo encher cada onibus com seus reespectivos caracteres\n");
    printf("\n");
    printf("Como Jogar:\n");
    printf("Informe a linha e a coluna do passageiro que deseja\n");
    printf("Caracteres do mesmo onibus entra desde que não estejam bloqueado\n");
    printf("Caracteres diferentes entram na fila de espera\n");
    printf("\n");

    printf("Regras:\n");
    printf("Se a fila de espera encher a partida e encerrada e você perde\n");
    printf("Cada ônibus aceita apenas um tipo de passageiro\n");
    printf("\n");

    printf("Tecle <enter> para prosseguir\n");

    getchar();  //Espera a tecla enter ser digitada 
    getchar();

}

void carregarRanking(){ //Funcao para carregar o ranking
    FILE *rank = fopen("ranking.bin", "rb");
    if(rank == NULL){   
        return; //arquivo ainda nao existe qntRanking continua 0
    }

    qntRanking = 0;

    while(fread(&jogador[qntRanking], sizeof(jogador[qntRanking]), 1, rank) == 1){  //Leio e salvo nos dados da struct
        qntRanking++;
    }

    fclose(rank);
}

void salvarRankingCompleto(){   //funcao para escrever todas as info no ranking
    FILE *rank = fopen("ranking.bin", "wb");    //Abro arquivo de ranking para escrita

    if(rank == NULL){
        rank = fopen("ranking.bin", "wb"); 
    }

    for(int i = 0; i<qntRanking; i++){
        fwrite(&jogador[i], sizeof(jogador[i]), 1, rank);   //Escrevo a struct com nome e pontucao 
    }

    fclose(rank);

}

void atualizarRank(){ //Funcao para atualizar as info no ranking

    int existe = 0;    //Comparar se ja existe no ranking
    for(int i = 0; i<qntRanking; i++){
        if(strcmp(jogador[i].nickname, jogador[qntRanking].nickname) == 0){     //Se sim verifica a pontucao e troca se for menor
            existe++;
            if(jogador[i].pontuacao <= jogador[qntRanking].pontuacao){
                jogador[i].pontuacao = jogador[qntRanking].pontuacao;
            }
        }
    }

    if(existe == 0){
        qntRanking++;
    }

    salvarRankingCompleto();    //Salvo no rank todas as info atualizadas
}

void zerarRanking(){ //Funcao para zerar o raking
    
    FILE *rank = fopen("ranking.bin", "wb"); // "wb" apaga o conteudo
    if(rank != NULL){
        fclose(rank);
    }
    qntRanking = 0; // zera tambem o contador
    printf("Ranking zerado\n");
    printf("\n");
    printf("Tecle <enter> para voltar\n");
    getchar();
    getchar();

}

void mostrarRanking(){  //Funcao para mostrar o ranking
    limparTela();

    printf("****************************\n");
    printf("**                        **\n");
    printf("**         RANKING        **\n");
    printf("**                        **\n");
    printf("****************************\n");

    for(int i = 0; i<qntRanking; i++){      //Orderno a pontucao
        for(int j = 0; j < qntRanking - i - 1; j++){
            if(jogador[j].pontuacao < jogador[j + 1].pontuacao){
                ranking temp = jogador[j];
                jogador[j] = jogador[j + 1];
                jogador[j + 1] = temp;
            }
        }
    }

    printf("\n");
    printf("\n");
    for(int i = 0; i<qntRanking; i++){      //Imprimir o nickname e pontuacao
        printf("NICKNAME: %s  PONTUAÇAO: %d\n", jogador[i].nickname, jogador[i].pontuacao);
    }

    printf("\n");

    printf("Tecle <ENTER> para voltar\n");
    getchar();
    getchar();
}

void carregarFase(){    //Funcao de carrega o dados da fase

    char c;    
    if(arq == NULL){   //Abro o entrada.txt
        arq = fopen("entrada.txt", "r");
    }

    fscanf(arq, "%d", &lista[cont].quantOnibus);  //Quantidade de onibus
    fscanf(arq, "%d", &lista[cont].quantLinhas);  //Quantidade de linhas
    fscanf(arq, "%d", &lista[cont].quantColunas);  //Quantidaade de colunas
    fscanf(arq, "%s", lixo);

    for(int i = 0; i<lista[cont].quantLinhas; i++){ //Leio cada linha da matriz
        fscanf(arq, "%s", linhaMatriz[i]);
    }

    fscanf(arq, "%s", lista[cont].ordemOnibus); //Leio a ordem dos onibus

    fscanf(arq, " %c", &lista[cont].termino); //Leio o F ou U

    
}

void venceu(){  //Funcao quando venceu
    limparTela();

    printf("*** JOGO DO %s ***\n", nomeJogo);
    printf("\n");
    
    printf("**************************************\n");
    printf("**      PARABENS VOCE VENCEU        **\n");
    printf("**                                  **\n");
    printf("**          PONTUACAO: %d          **\n", jogador[qntRanking].pontuacao);
    printf("**                                  **\n");
    printf("**          TECLE <ENTER>           **\n");
    printf("**************************************\n");

    atualizarRank();    //Atualizo o ranking

    jogador[qntRanking].pontuacao = 0;  //Zera a pontucao
    cont = 0;
    perdeu = 1;

    fclose(arq);    //fecho o arquivo
    arq = fopen("entrada.txt", "r");

    printf("\n");

    getchar(); 
    getchar();

}

void proximaFase(){  //Funcao de proxima fase
    limparTela();

    jogador[qntRanking].pontuacao += 100;  
    
    if(lista[cont].termino == 'U'){
        venceu();
        return;
    }

    printf("*** JOGO DO %s ***\n", nomeJogo);
    printf("\n");
    
    printf("**************************************\n");
    printf("**  MUITO BEM VOCE FINALIZOU A FASE **\n");
    printf("**                                  **\n");
    printf("**   Ir para a proxima fase(S/N)    **\n");
    printf("**************************************\n");

    printf("\n");

    char opcao;
    scanf(" %c", &opcao);

    if(opcao == 'S' || opcao == 's'){
        cont++; //Adiciono no contador de fase
        mainJogo(); //Se = S continua 
    }else if(opcao == 'N'|| opcao == 'n'){  //Senao volta para o menu principal
        return;   
    }

}


void perdeuFase(){  //funcao quando perde a fase  
    
    printf("\n");

    printf("*************************************************\n");
    printf("**  COM ESTE MOVIMENTO, LOTOU A FILA DE ESPERA **\n");
    printf("**                PONTUACAO: %d               **\n", jogador[qntRanking].pontuacao);
    printf("**                TECLE <ENTER>                **\n");
    printf("*************************************************\n");

    printf("\n");

    atualizarRank();    //Atualizo o ranking

    jogador[qntRanking].pontuacao = 0;  //Zera a pontucao
    cont = 0;
    perdeu = 1;

    fclose(arq);    //fecho o arquivo
    arq = fopen("entrada.txt", "r");

    getchar();
    getchar();

    return;    //Volto para o menu

}


void mainJogo(){    //Funcao principal do jogo
    limparTela(); 
    carregarFase();

    char filaEspera[5][2] = {"_", "_", "_", "_", "_"}; //Fila de espera


    for(int i = 0; i<lista[cont].quantOnibus; i++){
        limparTela();


        char banco1 = ' ';  //Caracteres do banco
        char banco2 = ' ';
        char banco3 = ' ';

        int filaVazia = 0;

        while(banco1 == ' ' || banco2 == ' ' || banco3 == ' '){ //Enquanto os bancos estao vazios repete
            limparTela();

            for(int j = 0; j<5; j++){   //Se algum caracter da fila de espera for = onibus troca para os bancos
                if(filaEspera[j][0] == lista[cont].ordemOnibus[i]){
                    if(banco1 == ' '){  
                        banco1 = filaEspera[j][0];  //Banco = caracter  
                        filaEspera[j][0] = '_';
                        filaEspera[j][1] = '\0';
                    }else if(banco2 == ' '){
                        banco2 = filaEspera[j][0];
                        filaEspera[j][0] = '_';
                        filaEspera[j][1] = '\0';
                    }else if(banco3 == ' '){
                        banco3 = filaEspera[j][0];
                        filaEspera[j][0] = '_';
                        filaEspera[j][1] = '\0';
                    }
                }
            }

            if(banco1 != ' ' && banco2 != ' ' && banco3 != ' '){//Caso todos os bancos tenham sido completos
                break;
            }

            printf("*** JOGO DO %s ***\n", nomeJogo);
            printf("\n");

            printf("PONTUACAO: %d\n", jogador[qntRanking].pontuacao);

            
            printf("+----o--------o----+\n");
            printf("|    -    -    -   |-+\n");
            printf("|   |%c   |%c   |%c   |%c|\n", banco1, banco2, banco3, lista[cont].ordemOnibus[i]);
            printf("|    -    -    -   |-+\n");
            printf("+----o---===--o----+\n");

            printf("\n");


            for(int j = 0; j<5; j++){   //Imprimi a fila de espera 
                if(j == 4){
                    printf("%s\n", filaEspera[j]);
                }else{
                    printf("%s ", filaEspera[j]);
                }
            }

            printf("\n");
            printf("\n");


            int aux = 1;    //Numero das linhas
            for(int j = 0; j<lista[cont].quantLinhas; j++){ //Imprimi a Matriz
                printf("%d %s\n", aux, linhaMatriz[j]);
                aux++;
            }
            
            for(int i = 1; i<=10; i++){ //Imprimir o Numero das colunas
                if(i == 1){
                    printf("  %d", i);
                }else{
                    printf("%d", i);
                }
            }
            printf("\n");
            printf("\n");

    
            printf("Informe a linha e coluna para embarcar no onibus: ");
        
            int linha, coluna; 

            scanf("%d %d", &linha, &coluna);    //leio a linha e coluna da matriz
            linha--;
            coluna--;

            if(linhaMatriz[linha][coluna] == '_' || linhaMatriz[linha][coluna] == ' ' || coluna > 10 || coluna < 0 || linha >= lista[cont].quantLinhas || linha < 0){   //Caso seja uma parede ou fora da matriz imprimi erro
                if(linhaMatriz[linha][coluna] = ' '){
                    printf("O Caracter ja foi movido tecle <enter> para voltar");
                    
                }else{
                    printf("Posicao invalida tecle <enter> para voltar\n");
                }
                getchar();
                getchar();
            }else{
                if(linhaMatriz[linha][coluna] == lista[cont].ordemOnibus[i]){   //Se o caracter for = ao onibus
        
                if(linha == 0){ //Se for o primeiro da fila
                    if(banco1 == ' '){  //Verifica qual banco esta livre e troca
                        banco1 = linhaMatriz[linha][coluna];
                        linhaMatriz[linha][coluna] = ' ';   //Troca o caracter dentro da matriz por ' '
                    }else if(banco2 == ' '){
                        banco2 = linhaMatriz[linha][coluna];
                        linhaMatriz[linha][coluna] = ' ';
                    }else if(banco3 == ' '){
                        banco3 = linhaMatriz[linha][coluna];
                        linhaMatriz[linha][coluna] = ' ';
                    }
                }else{
                    if(linhaMatriz[linha - 1][coluna] != ' ' && linhaMatriz[linha][coluna - 1] != ' ' && linhaMatriz[linha][coluna + 1] != ' '){      //Se tiver algum caracter na frente e dos lados retorna erro
                        printf("Elemento bloqueado tecle <enter> para voltar");
                        getchar();
                        getchar();
                    }else{  //Senao verifia aonde esta livre
                        
                        if(linhaMatriz[linha - 1][coluna] == ' ') { //Se for o de cima
                            if(banco1 == ' '){  //Verifica qual banco esta livre e troca
                                banco1 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';   //Troca o caracter dentro da matriz por ' '
                            }else if(banco2 == ' '){
                                banco2 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }else if(banco3 == ' '){
                                banco3 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }
                        }else if(linhaMatriz[linha][coluna + 1] == ' '){//Se for o da direita
                            if(banco1 == ' '){  //Verifica qual banco esta livre e troca
                                banco1 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';   //Troca o caracter dentro da matriz por ' '
                            }else if(banco2 == ' '){
                                banco2 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }else if(banco3 == ' '){
                                banco3 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }
                        }else if(linhaMatriz[linha][coluna - 1] == ' '){//Se for o da esquerda
                            if(banco1 == ' '){  //Verifica qual banco esta livre e troca
                                banco1 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';   //Troca o caracter dentro da matriz por ' '
                            }else if(banco2 == ' '){
                                banco2 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }else if(banco3 == ' '){
                                banco3 = linhaMatriz[linha][coluna];
                                linhaMatriz[linha][coluna] = ' ';
                            }
                        }

                    }
                }
            
            }else{//Se o caracter nao for = onibus

                if(linha == 0){ //Se estiver na primeira linha
                    for(int k = 0; k<5; k++){   //Caso o banco esteja vazio entra nesse banco
                        if(strcmp(filaEspera[k], "_") == 0){
                            filaEspera[k][0] = linhaMatriz[linha][coluna];
                            filaEspera[k][1] = '\0';
                            linhaMatriz[linha][coluna] = ' ';  //Caracter dentro da matriz vira um espaco
                            break;
                        }
                    }

                }else{
                    if(linhaMatriz[linha - 1][coluna] != ' ' && linhaMatriz[linha][coluna + 1] != ' ' && linhaMatriz[linha][coluna - 1] != ' '){      //Se tiver algum caracter na frente e dos lados retorna erro
                        printf("Elemento bloqueado tecle <enter> para voltar");
                        getchar();
                        getchar();
                    }else{
                        
                        if(linhaMatriz[linha - 1][coluna] == ' '){      //Se for o de cima
                            for(int k = 0; k<5; k++){   //Caso o banco esteja vazio entra nesse banco
                                if(strcmp(filaEspera[k], "_") == 0){
                                    filaEspera[k][0] = linhaMatriz[linha][coluna];
                                    filaEspera[k][1] = '\0';
                                    linhaMatriz[linha][coluna] = ' ';  //Caracter dentro da matriz vira um espaco
                                    break;
                                }
                            }
                        }else if(linhaMatriz[linha][coluna + 1] == ' '){  //Se for o da direita
                            for(int k = 0; k<5; k++){   //Caso o banco esteja vazio entra nesse banco
                                if(strcmp(filaEspera[k], "_") == 0){
                                    filaEspera[k][0] = linhaMatriz[linha][coluna];
                                    filaEspera[k][1] = '\0';
                                    linhaMatriz[linha][coluna] = ' ';  //Caracter dentro da matriz vira um espaco
                                    break;
                                }
                            }
                        }else if(linhaMatriz[linha][coluna - 1] == ' '){    //Se for o da esquerda
                            for(int k = 0; k<5; k++){   //Caso o banco esteja vazio entra nesse banco
                                if(strcmp(filaEspera[k], "_") == 0){
                                    filaEspera[k][0] = linhaMatriz[linha][coluna];
                                    filaEspera[k][1] = '\0';
                                    linhaMatriz[linha][coluna] = ' ';  //Caracter dentro da matriz vira um espaco
                                    break;
                                }
                            }  
                        }
                    }

                    
                }
            }
        }

            if(banco1 != ' ' && banco2 != ' ' && banco3 != ' '){
                jogador[qntRanking].pontuacao += 15;
            }


            for(int j = 0; j<5; j++){   //conta quantos bancos vazios na fila de espera
                if(strcmp(filaEspera[j], "_") == 0){
                    filaVazia++;
                }
            }

            if(filaVazia == 0){ // Se fila vazia retorna 0 perdeu a fase
                perdeuFase();
                filaVazia = 0;
            }

            if(perdeu == 1){    //se perdeu interrope e volta para o menu
                perdeu = 0;
                return;
            }

            filaVazia = 0;

        }

    }

    proximaFase();
    
}

void configuracoes(){   //Mostrar as configuracoes
    limparTela();

    int opcao;

    carregarRanking();//chamo a funcao para carregar o ranking

    printf("*** JOGO DO %s ***\n", nomeJogo);
    printf("\n");

    printf("1 - Zerar ranking\n");
    printf("2 - Voltar para o menu\n");
    printf("\n");

    printf("Digite a opcao: ");

    scanf("%d", &opcao); 
    if(opcao == 1){     //Caso 1 = zerar ranking
        zerarRanking();
    }else if(opcao == 2){   //Caso 2 = menu principal
        menuPrincipal();
    }else{  
        printf("Opcao invalida tecle <enter>\n");
        printf("Digite novamente: ");
        scanf("%d", &opcao);
    }
}

int main(){

    int opcao;
    carregarRanking();  //Carrego o ranking

    telaInicial();  //Chamo a tela inicial
    
    while(1){

        opcao = menuPrincipal();   //Chamo o menu principal

        if(opcao == 1){
            mainJogo();
        }else if(opcao == 2){
            configuracoes();
        }
        else if(opcao == 3){
            telaInstrucoes();   //Mostra a tela de Instrucoes
        }else if(opcao == 4){
            mostrarRanking();                   //Mostra o Ranking
        }else if(opcao == 5){
            break;      //Caso a opcao =  4 sai do jogo
        }else{
            printf("Opcao Invalida!\n");  //Caso nenhuma das anteriores = opcao invalida
            getchar();
            getchar();  //Espero um tecla seja digitada
        }


    }
    
    return 0;
}
