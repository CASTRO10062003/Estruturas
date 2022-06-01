#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int menu(){
    int opcao;
        do{
            printf("\n");
            printf("   M E N U \n");
            printf("1- Inserir job\n");
            printf("2- Inserir operacao\n");
            printf("3- Inserir maquina\n");
            printf("4- Remover job \n");
            printf("5- Remover operacao \n");
            printf("6- Remover maquina \n");
            printf("7- Alterar job\n");
            printf("8- Alterar operacao\n");
            printf("9- Alterar maquina\n");
            printf("10- Alterar tempo\n");
            printf("11- Tempo maior \n");
            printf("12- Tempo menor \n");
            printf("13- Tempo medio \n");
            printf("14- Listar \n");
            printf("0-Sair \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>15));

        return(opcao);
}


int main(int argc, char *argv[]){
    Lista* listaJob=NULL; 

    
    listaJob = inserirMaquina(listaJob, 1, 1, 1, 4);
    listaJob = inserirMaquina(listaJob, 1, 1, 3, 5);

    listaJob = inserirMaquina(listaJob, 1, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 1, 2, 4, 5);

    listaJob = inserirMaquina(listaJob, 1, 3, 3, 5);
    listaJob = inserirMaquina(listaJob, 1, 3, 5, 6);

    listaJob = inserirMaquina(listaJob, 1, 4, 4, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 5, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 6, 4);
    listaJob = inserirMaquina(listaJob, 1, 4, 7, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 8, 9);
    // ---------------------------------------------
    listaJob = inserirMaquina(listaJob, 2, 1, 1, 1);
    listaJob = inserirMaquina(listaJob, 2, 1, 3, 5);
    listaJob = inserirMaquina(listaJob, 2, 1, 5, 7);

    listaJob = inserirMaquina(listaJob, 2, 2, 4, 5);
    listaJob = inserirMaquina(listaJob, 2, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 2, 3, 5, 6);
    listaJob = inserirMaquina(listaJob, 2, 3, 4, 5);

    listaJob = inserirMaquina(listaJob, 2, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 2, 4, 7, 4);
    listaJob = inserirMaquina(listaJob, 2, 4, 8, 7);

    listaJob = inserirMaquina(listaJob, 2, 5, 4, 1);
    listaJob = inserirMaquina(listaJob, 2, 5, 6, 2);

    listaJob = inserirMaquina(listaJob, 2, 6, 1, 5);
    listaJob = inserirMaquina(listaJob, 2, 6, 6, 6);
    listaJob = inserirMaquina(listaJob, 2, 6, 8, 4);

    listaJob = inserirMaquina(listaJob, 2, 7, 4, 4);
    //-------------------------------------
    listaJob = inserirMaquina(listaJob, 3, 1, 2, 7);
    listaJob = inserirMaquina(listaJob, 3, 1, 3, 6);
    listaJob = inserirMaquina(listaJob, 3, 1, 8, 8);

    listaJob = inserirMaquina(listaJob, 3, 2, 4, 7);
    listaJob = inserirMaquina(listaJob, 3, 2, 8, 7);

    listaJob = inserirMaquina(listaJob, 3, 3, 3, 7);
    listaJob = inserirMaquina(listaJob, 3, 3, 5, 8);
    listaJob = inserirMaquina(listaJob, 3, 3, 7, 7);

    listaJob = inserirMaquina(listaJob, 3, 4, 4, 7);
    listaJob = inserirMaquina(listaJob, 3, 4, 6, 8);

    listaJob = inserirMaquina(listaJob, 3, 5, 1, 1);
    listaJob = inserirMaquina(listaJob, 3, 5, 2, 4);
    //---------------------------------
    listaJob = inserirMaquina(listaJob, 4, 1, 1, 4);
    listaJob = inserirMaquina(listaJob, 4, 1, 3, 3);
    listaJob = inserirMaquina(listaJob, 4, 1, 5, 7);

    listaJob = inserirMaquina(listaJob, 4, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 4, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 4, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 4, 3, 4, 5);
    listaJob = inserirMaquina(listaJob, 4, 3, 6, 6);
    listaJob = inserirMaquina(listaJob, 4, 3, 7, 7);

    listaJob = inserirMaquina(listaJob, 4, 4, 5, 3);
    listaJob = inserirMaquina(listaJob, 4, 4, 6, 5);
    listaJob = inserirMaquina(listaJob, 4, 4, 8, 5);
    //-----------------------------------------
    listaJob = inserirMaquina(listaJob, 5, 1, 1, 3);

    listaJob = inserirMaquina(listaJob, 5, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 5, 2, 4, 5);

    listaJob = inserirMaquina(listaJob, 5, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 5, 3, 8, 4);

    listaJob = inserirMaquina(listaJob, 5, 4, 5, 3);
    listaJob = inserirMaquina(listaJob, 5, 4, 6, 3);
    listaJob = inserirMaquina(listaJob, 5, 4, 8, 3);

    listaJob = inserirMaquina(listaJob, 5, 5, 4, 5);
    listaJob = inserirMaquina(listaJob, 5, 5, 6, 4);
    //-----------------------------
    listaJob = inserirMaquina(listaJob, 6, 1, 1, 3);
    listaJob = inserirMaquina(listaJob, 6, 1, 2, 5);
    listaJob = inserirMaquina(listaJob, 6, 1, 3, 6);

    listaJob = inserirMaquina(listaJob, 6, 2, 4, 7);
    listaJob = inserirMaquina(listaJob, 6, 2, 5, 8);

    listaJob = inserirMaquina(listaJob, 6, 3, 3, 9);
    listaJob = inserirMaquina(listaJob, 6, 3, 6, 8);
    //-----------------------------------
    listaJob = inserirMaquina(listaJob, 7, 1, 3, 4);
    listaJob = inserirMaquina(listaJob, 7, 1, 5, 5);
    listaJob = inserirMaquina(listaJob, 7, 1, 6, 4);

    listaJob = inserirMaquina(listaJob, 7, 2, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 2, 7, 6);
    listaJob = inserirMaquina(listaJob, 7, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 7, 3, 1, 3);
    listaJob = inserirMaquina(listaJob, 7, 3, 3, 3);
    listaJob = inserirMaquina(listaJob, 7, 3, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 3, 5, 5);

    listaJob = inserirMaquina(listaJob, 7, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 4, 6, 6);
    listaJob = inserirMaquina(listaJob, 7, 4, 8, 5);

    listaJob = inserirMaquina(listaJob, 7, 5, 1, 3);
    listaJob = inserirMaquina(listaJob, 7, 5, 3, 3);
    //---------------------------------------
    listaJob = inserirMaquina(listaJob, 8, 1, 1, 3);
    listaJob = inserirMaquina(listaJob, 8, 1, 2, 4);
    listaJob = inserirMaquina(listaJob, 8, 1, 6, 4);

    listaJob = inserirMaquina(listaJob, 8, 2, 4, 6);
    listaJob = inserirMaquina(listaJob, 8, 2, 5, 5);
    listaJob = inserirMaquina(listaJob, 8, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 8, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 8, 3, 7, 5);

    listaJob = inserirMaquina(listaJob, 8, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 8, 4, 6, 6);

    listaJob = inserirMaquina(listaJob, 8, 5, 7, 1);
    listaJob = inserirMaquina(listaJob, 8, 5, 8, 2);
    
    
    int opcaomenu;
    int job, jobNovo, operacao, operacaoNova, maquina, maquinaNova, tempo;
    int verJob, verOperacao, verMaquina;
    int tempoMaior, tempoMenor;

    listaJob = lerFicheiro(listaJob);

    do{
        opcaomenu = menu();
        switch (opcaomenu){
        case 1:
                
                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 1){
                                    printf("Esse job ja existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==1){
                                    printf("Essa operacao ja existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                           listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                            printf("Inserido!\n");
                    break;

        case 2: // inserir operacao

                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){
                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==1){
                                    printf("Essa operacao ja existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                            listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                            printf("Inserido!\n");
                    break;

        case 3: // inserir maquina

                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){
                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==0){
                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            verMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (verMaquina==1){
                                   printf("Essa maquina ja existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    verMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                           listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                            printf("Inserido!\n");
                    break;
                    

        case 4:

                        printf("Job: ");
                        scanf("%d", &job);

                        verJob = verificarJob(listaJob, job);

                        while (verJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                verJob = verificarJob(listaJob, job);
                        }

                        listaJob = removerJob(listaJob, job);

                        escreverFicheiro(listaJob);

                        printf("Removido!\n");

                break;

        case 5: //remover operacao

                        printf("Job: ");
                        scanf("%d", &job);

                        verJob = verificarJob(listaJob, job);

                        while (verJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                verJob = verificarJob(listaJob, job);
                        }

                        printf("Operacao: ");
                        scanf("%d", &operacao);

                        verOperacao = verificarOperacao(listaJob, job, operacao);

                        while (verOperacao==0){
                                printf("Nao existe essa operacao\n");

                                printf("Operacao: ");
                                scanf("%d", &operacao);

                                verOperacao = verificarOperacao(listaJob, job, operacao);
                        }

                        listaJob = removerOperacao(listaJob, job, operacao);

                        escreverFicheiro(listaJob);

                        printf("Removido!\n");
                break;

        case 6: //remover maquina

                        printf("Job: ");
                        scanf("%d", &job);

                        verJob = verificarJob(listaJob, job);

                        while (verJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                verJob = verificarJob(listaJob, job);
                        }

                        printf("Operacao: ");
                        scanf("%d", &operacao);

                        verOperacao = verificarOperacao(listaJob, job, operacao);

                        while (verOperacao==0){
                        printf("Essa operacao nao existe\n");

                                printf("Operacao: ");
                                scanf("%d", &operacao);

                                verOperacao = verificarOperacao(listaJob, job, operacao);
                        }

                        printf("Maquina: ");
                        scanf("%d", &maquina);

                        verMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                        while (verMaquina==0){
                               printf("Essa maquina nao existe\n");

                                printf("Maquina: ");
                                scanf("%d", &maquina);

                                verMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                        }


                        listaJob = removerMaquina(&listaJob, job, operacao, maquina);

                        escreverFicheiro(listaJob);

                        printf("Removido!\n");
                break;
                    

        case 7:

                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Job novo: ");
                            scanf("%d", &jobNovo);

                            verJob = verificarJob(listaJob, jobNovo);

                            while (verJob == 1){

                                printf("Esse job ja existe\n");

                                printf("Job novo: ");
                                scanf("%d", &jobNovo);

                                verJob = verificarJob(listaJob, jobNovo);
                            }

                            alterarJob(listaJob, job, jobNovo);

                            escreverFicheiro(listaJob);

                            printf("ALterado!\n");
                    break;
                    
         case 8:  // alterar operacao

                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Operacao nova: ");
                            scanf("%d", &operacaoNova);

                            verOperacao = verificarOperacao(listaJob, job, operacaoNova);

                            while (verOperacao == 1){

                                printf("Essa operacao ja existe\n");

                                printf("Operacao nova: ");
                                scanf("%d", &operacaoNova);

                                verOperacao = verificarOperacao(listaJob, job, operacaoNova);

                            }

                            alterarOperacao(listaJob, job, operacao, operacaoNova);

                            escreverFicheiro(listaJob);

                            printf("ALterado!\n");
                    break;

        case 9:  // alterar maquina

                            printf("Job: ");
                            scanf("%d", &job);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);

                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            verMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (verMaquina==0){
                                   printf("Essa maquina nao existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    verMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Maquina nova: ");
                            scanf("%d", &maquinaNova);

                            verMaquina = verificarMaquina(listaJob, job, operacao, maquinaNova);

                            while (verMaquina==1){
                                   printf("Essa maquina ja existe\n");

                                    printf("Maquina nova: ");
                                    scanf("%d", &maquinaNova);

                                    verMaquina = verificarMaquina(listaJob, job, operacao, maquinaNova);
                            }

                            alterarMaquina(listaJob, job, operacao, maquina, maquinaNova);

                            escreverFicheiro(listaJob);

                            printf("ALterado!\n");
                    break;

        case 10:  // alterar tempo

                            printf("Job: ");
                            scanf("%d", &operacao);

                            verJob = verificarJob(listaJob, job);

                            while (verJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    verJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            verOperacao = verificarOperacao(listaJob, job, operacao);

                            while (verOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    verOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            verMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (verMaquina == 0){
                                   printf("Essa maquina nao existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    verMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Novo tempo: ");
                            scanf("%d", &tempo);

                            alterarTempo(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);
                            
                            printf("ALterado!\n");
                    break;

        case 11:

                        tempoMaior = verMaior(listaJob);

                        printf("O Maximo tempo e: %dUT\n", tempoMaior);

                break;

        case 12: // tempo menor

                        tempoMenor = verMenor(listaJob);

                        printf("O Menor tempo e: %dUT\n", tempoMenor);

                break;

        case 13: // tempo medio

                        verMedia(listaJob);

        break;

        case 14:
                listarJob(listaJob);
        break;
        }
        
    } while (opcaomenu!=0);

    return(0);
}
