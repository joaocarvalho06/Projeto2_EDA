#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoesTP.h"

int menu(){
    int Nopcao;
        do{
            printf("\n");
            printf("menu de utilizacao:\n");
            printf("1-inserir novo job \n");
            printf("2-inserir nova operacao\n");
            printf("3-inserir nova maquina\n");
            printf("4-remover job\n");
            printf("5-remover operacao\n");
            printf("6-remover maquina\n");
            printf("7-alterar job\n");
            printf("8-alterar operacao\n");
            printf("9-alterar maquina\n");
            printf("10-alterar tempo da maquina\n");
            printf("11-tempo maior\n");
            printf("12-tempo menor\n");
            printf("13-media\n");
            printf("14-listar\n");
            printf("0-Sair\n");
            printf("Nopcao: ");
            scanf("%d", &Nopcao);
            printf("\n");
        }
        while((Nopcao<0)||(Nopcao>14));

        return(Nopcao);
}

int main(int argc, char *argv[])
{
    Lista* listaj=NULL;
    listaj = inserirmaq(listaj, 1, 1, 1, 4);
    listaj = inserirmaq(listaj, 1, 1, 3, 5);

    listaj = inserirmaq(listaj, 1, 2, 2, 4);
    listaj = inserirmaq(listaj, 1, 2, 4, 5);

    listaj = inserirmaq(listaj, 1, 3, 3, 5);
    listaj = inserirmaq(listaj, 1, 3, 5, 6);

    listaj = inserirmaq(listaj, 1, 4, 4, 5);
    listaj = inserirmaq(listaj, 1, 4, 5, 5);
    listaj = inserirmaq(listaj, 1, 4, 6, 4);
    listaj = inserirmaq(listaj, 1, 4, 7, 5);
    listaj = inserirmaq(listaj, 1, 4, 8, 9);

    listaj = inserirmaq(listaj, 2, 1, 1, 1);
    listaj = inserirmaq(listaj, 2, 1, 3, 5);
    listaj = inserirmaq(listaj, 2, 1, 5, 7);

    listaj = inserirmaq(listaj, 2, 2, 4, 5);
    listaj = inserirmaq(listaj, 2, 2, 8, 4);

    listaj = inserirmaq(listaj, 2, 3, 5, 6);
    listaj = inserirmaq(listaj, 2, 3, 4, 5);

    listaj = inserirmaq(listaj, 2, 4, 4, 4);
    listaj = inserirmaq(listaj, 2, 4, 7, 4);
    listaj = inserirmaq(listaj, 2, 4, 8, 7);

    listaj = inserirmaq(listaj, 2, 5, 4, 1);
    listaj = inserirmaq(listaj, 2, 5, 6, 2);

    listaj = inserirmaq(listaj, 2, 6, 1, 5);
    listaj = inserirmaq(listaj, 2, 6, 6, 6);
    listaj = inserirmaq(listaj, 2, 6, 8, 4);

    listaj = inserirmaq(listaj, 2, 7, 4, 4);

    listaj = inserirmaq(listaj, 3, 1, 2, 7);
    listaj = inserirmaq(listaj, 3, 1, 3, 6);
    listaj = inserirmaq(listaj, 3, 1, 8, 8);

    listaj = inserirmaq(listaj, 3, 2, 4, 7);
    listaj = inserirmaq(listaj, 3, 2, 8, 7);

    listaj = inserirmaq(listaj, 3, 3, 3, 7);
    listaj = inserirmaq(listaj, 3, 3, 5, 8);
    listaj = inserirmaq(listaj, 3, 3, 7, 7);

    listaj = inserirmaq(listaj, 3, 4, 4, 7);
    listaj = inserirmaq(listaj, 3, 4, 6, 8);

    listaj = inserirmaq(listaj, 3, 5, 1, 1);
    listaj = inserirmaq(listaj, 3, 5, 2, 4);

    listaj = inserirmaq(listaj, 4, 1, 1, 4);
    listaj = inserirmaq(listaj, 4, 1, 3, 3);
    listaj = inserirmaq(listaj, 4, 1, 5, 7);

    listaj = inserirmaq(listaj, 4, 2, 2, 4);
    listaj = inserirmaq(listaj, 4, 2, 8, 4);

    listaj = inserirmaq(listaj, 4, 3, 3, 4);
    listaj = inserirmaq(listaj, 4, 3, 4, 5);
    listaj = inserirmaq(listaj, 4, 3, 6, 6);
    listaj = inserirmaq(listaj, 4, 3, 7, 7);

    listaj = inserirmaq(listaj, 4, 4, 5, 3);
    listaj = inserirmaq(listaj, 4, 4, 6, 5);
    listaj = inserirmaq(listaj, 4, 4, 8, 5);

    listaj = inserirmaq(listaj, 5, 1, 1, 3);

    listaj = inserirmaq(listaj, 5, 2, 2, 4);
    listaj = inserirmaq(listaj, 5, 2, 4, 5);

    listaj = inserirmaq(listaj, 5, 3, 3, 4);
    listaj = inserirmaq(listaj, 5, 3, 8, 4);

    listaj = inserirmaq(listaj, 5, 4, 5, 3);
    listaj = inserirmaq(listaj, 5, 4, 6, 3);
    listaj = inserirmaq(listaj, 5, 4, 8, 3);

    listaj = inserirmaq(listaj, 5, 5, 4, 5);
    listaj = inserirmaq(listaj, 5, 5, 6, 4);

    listaj = inserirmaq(listaj, 6, 1, 1, 3);
    listaj = inserirmaq(listaj, 6, 1, 2, 5);
    listaj = inserirmaq(listaj, 6, 1, 3, 6);

    listaj = inserirmaq(listaj, 6, 2, 4, 7);
    listaj = inserirmaq(listaj, 6, 2, 5, 8);

    listaj = inserirmaq(listaj, 6, 3, 3, 9);
    listaj = inserirmaq(listaj, 6, 3, 6, 8);

    listaj = inserirmaq(listaj, 7, 1, 3, 4);
    listaj = inserirmaq(listaj, 7, 1, 5, 5);
    listaj = inserirmaq(listaj, 7, 1, 6, 4);

    listaj = inserirmaq(listaj, 7, 2, 4, 4);
    listaj = inserirmaq(listaj, 7, 2, 7, 6);
    listaj = inserirmaq(listaj, 7, 2, 8, 4);

    listaj = inserirmaq(listaj, 7, 3, 1, 3);
    listaj = inserirmaq(listaj, 7, 3, 3, 3);
    listaj = inserirmaq(listaj, 7, 3, 4, 4);
    listaj = inserirmaq(listaj, 7, 3, 5, 5);

    listaj = inserirmaq(listaj, 7, 4, 4, 4);
    listaj = inserirmaq(listaj, 7, 4, 6, 6);
    listaj = inserirmaq(listaj, 7, 4, 8, 5);

    listaj = inserirmaq(listaj, 7, 5, 1, 3);
    listaj = inserirmaq(listaj, 7, 5, 3, 3);

    listaj = inserirmaq(listaj, 8, 1, 1, 3);
    listaj = inserirmaq(listaj, 8, 1, 2, 4);
    listaj = inserirmaq(listaj, 8, 1, 6, 4);

    listaj = inserirmaq(listaj, 8, 2, 4, 6);
    listaj = inserirmaq(listaj, 8, 2, 5, 5);
    listaj = inserirmaq(listaj, 8, 2, 8, 4);

    listaj = inserirmaq(listaj, 8, 3, 3, 4);
    listaj = inserirmaq(listaj, 8, 3, 7, 5);

    listaj = inserirmaq(listaj, 8, 4, 4, 4);
    listaj = inserirmaq(listaj, 8, 4, 6, 6);

    listaj = inserirmaq(listaj, 8, 5, 7, 1);
    listaj = inserirmaq(listaj, 8, 5, 8, 2);

    int opcao,job, jobNovo, operacao, operacaoNova, maquina, maquinaNova, tempo;
    int vJob, vOperacao, vMaquina,tempoMaior, tempoMenor;

    listaj = lerficheiro(listaj);


                do{
                    opcao = menu();
                    switch (opcao){

                    case 1:
                            printf("novo job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 1){
                                    printf("esse job já existe\n");

                                    printf("novo job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==1){
                                    printf("essa operacao ja existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("maquina: ");
                            scanf("%d", &maquina);

                            printf("tempo: ");
                            scanf("%d", &tempo);

                           listaj = inserirmaq(listaj, job, operacao, maquina, tempo);

                            escreverficheiro(listaj);

                    break;

                    case 2:

                            printf(" qual job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){
                                    printf("nao existe\n");

                                    printf("qual job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==1){
                                    printf("essa operacao ja existe\n");

                                    printf("operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("maquina: ");
                            scanf("%d", &maquina);

                            printf("tempo: ");
                            scanf("%d", &tempo);

                            listaj = inserirmaq(listaj, job, operacao, maquina, tempo);

                            escreverficheiro(listaj);

                    break;

                    case 3:

                            printf("qual job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){
                                    printf("nao existe\n");

                                    printf("qual job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==0){
                                    printf("nao existe\n");

                                    printf("operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarmaq(listaj, job, operacao, maquina);

                            while (vMaquina==1){
                                   printf("essa maquina ja existe\n");

                                    printf("maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarmaq(listaj, job, operacao, maquina);
                            }

                            printf("tempo: ");
                            scanf("%d", &tempo);

                           listaj = inserirmaq(listaj, job, operacao, maquina, tempo);

                            escreverficheiro(listaj);

                    break;



                case 4:

                        printf("qual job: ");
                        scanf("%d", &job);

                        vJob = verificarjob(listaj, job);

                        while (vJob == 0){

                                printf("nao existe\n");

                                printf("qual job: ");
                                scanf("%d", &job);

                                vJob = verificarjob(listaj, job);
                        }

                        listaj = removerjob(listaj, job);

                        escreverficheiro(listaj);

                break;

                case 5:

                        printf("qual job: ");
                        scanf("%d", &job);

                        vJob = verificarjob(listaj, job);

                        while (vJob == 0){

                                printf("nao existe\n");

                                printf("qual job: ");
                                scanf("%d", &job);

                                vJob = verificarjob(listaj, job);
                        }

                        printf("operacao: ");
                        scanf("%d", &operacao);

                        vOperacao = verificarop(listaj, job, operacao);

                        while (vOperacao==0){
                                printf("nao existe\n");

                                printf("operacao: ");
                                scanf("%d", &operacao);

                                vOperacao = verificarop(listaj, job, operacao);
                        }

                        listaj = removerop(listaj, job, operacao);

                        escreverficheiro(listaj);
                break;

                case 6:

                        printf("qual job: ");
                        scanf("%d", &job);

                        vJob = verificarjob(listaj, job);

                        while (vJob == 0){

                                printf("nao existe\n");

                                printf("qual job: ");
                                scanf("%d", &job);

                                vJob = verificarjob(listaj, job);
                        }

                        printf("operacao: ");
                        scanf("%d", &operacao);

                        vOperacao = verificarop(listaj, job, operacao);

                        while (vOperacao==0){
                        printf("nao existe\n");

                                printf("operacao: ");
                                scanf("%d", &operacao);

                                vOperacao = verificarop(listaj, job, operacao);
                        }

                        printf("maquina: ");
                        scanf("%d", &maquina);

                        vMaquina = verificarmaq(listaj, job, operacao, maquina);

                        while (vMaquina==0){
                               printf("nao existe\n");

                                printf("maquina: ");
                                scanf("%d", &maquina);

                                vMaquina = verificarmaq(listaj, job, operacao, maquina);
                        }


                        listaj = removermaq(&listaj, job, operacao, maquina);

                        escreverficheiro(listaj);
                break;


                    case 7:

                            printf("qual job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){

                                    printf("nao existe\n");

                                    printf("qual job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("job novo: ");
                            scanf("%d", &jobNovo);

                            vJob = verificarjob(listaj, jobNovo);

                            while (vJob == 1){

                                printf("esse job ja existe\n");

                                printf("job novo: ");
                                scanf("%d", &jobNovo);

                                vJob = verificarjob(listaj, jobNovo);
                            }

                            alterarjob(listaj, job, jobNovo);

                            escreverficheiro(listaj);

                    break;

                    case 8:

                            printf("qual job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){

                                    printf("nao existe\n");

                                    printf("qual job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==0){

                                    printf("nao existe\n");

                                    printf("operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("nova operacao: ");
                            scanf("%d", &operacaoNova);

                            vOperacao = verificarop(listaj, job, operacaoNova);

                            while (vOperacao == 1){

                                printf("ja existe essa operacao\n");

                                printf("nova operacao: ");
                                scanf("%d", &operacaoNova);

                                vOperacao = verificarop(listaj, job, operacaoNova);

                            }

                            alterarop(listaj, job, operacao, operacaoNova);
                            escreverficheiro(listaj);

                    break;

                    case 9:

                            printf("qual job: ");
                            scanf("%d", &job);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){

                                    printf("nao existe\n");

                                    printf("job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);

                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==0){

                                    printf("nao existe\n");

                                    printf("operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarmaq(listaj, job, operacao, maquina);

                            while (vMaquina==0){
                                   printf("nao existe\n");

                                    printf("maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarmaq(listaj, job, operacao, maquina);
                            }

                            printf("nova maquina: ");
                            scanf("%d", &maquinaNova);

                            vMaquina = verificarmaq(listaj, job, operacao, maquinaNova);

                            while (vMaquina==1){
                                   printf("Essa maquina ja existe\n");

                                    printf("nova maquina: ");
                                    scanf("%d", &maquinaNova);

                                    vMaquina = verificarmaq(listaj, job, operacao, maquinaNova);
                            }

                            alterarmaq(listaj, job, operacao, maquina, maquinaNova);

                            escreverficheiro(listaj);

                    break;

                    case 10:

                            printf("qual job: ");
                            scanf("%d", &operacao);

                            vJob = verificarjob(listaj, job);

                            while (vJob == 0){

                                    printf("nao existe\n");

                                    printf("qual job: ");
                                    scanf("%d", &job);

                                    vJob = verificarjob(listaj, job);
                            }

                            printf("operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarop(listaj, job, operacao);

                            while (vOperacao==0){

                                    printf("nao existe\n");

                                    printf("operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarop(listaj, job, operacao);
                            }

                            printf("maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarmaq(listaj, job, operacao, maquina);

                            while (vMaquina == 0){
                                   printf("nao existe\n");

                                    printf("maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarmaq(listaj, job, operacao, maquina);
                            }

                            printf("novo tempo: ");
                            scanf("%d", &tempo);

                            alterartemp(listaj, job, operacao, maquina, tempo);

                            escreverficheiro(listaj);

                    break;

                case 11:

                        tempoMaior = quantidadetempmax(listaj);

                        printf("quantidade maxima de unidades de tempo e: %dUT\n", tempoMaior);

                break;

                case 12:

                        tempoMenor = quantidadetempmin(listaj);

                        printf("quantidade minima de unidades de tempo e: %dUT\n", tempoMenor);

                break;

                case 13:

                        media(listaj);

                break;


        case 14:
                listarelementosjob(listaj);
        break;
        }

    } while (opcao!=0);

    return(0);
}
