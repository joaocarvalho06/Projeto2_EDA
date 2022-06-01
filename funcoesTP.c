#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoesTP.h"

Lista* inserirmaq(Lista* listaJob, int job, int op, int maq, int temp){

    Lista *novo = (Lista*) malloc(sizeof(Lista));

    if (novo != NULL){

        novo->job = job;
        novo->operacao = op;
        novo->maquina = maq;
        novo->tempo = temp;

        novo->seguinte = listaJob;

        return novo;
    }
    else return listaJob;
}

int alterarjob(Lista* listaJob, int job, int jobNovo){

    while (listaJob != NULL){

        if (job == listaJob->job){

            listaJob->job = jobNovo;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarop(Lista* listaJob, int job, int op, int opNova){

    while(listaJob != NULL){

        if (job == listaJob->job && op == listaJob->operacao){

            listaJob->operacao = opNova;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarmaq(Lista* listaJob, int job, int op, int maq, int maqNova){

    while(listaJob!=NULL){

        if ( job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->maquina = maqNova;
        }

        listaJob=listaJob->seguinte;
    }

    return 0;
}

int alterartemp(Lista* listaJob, int job, int op, int maq, int temp){

    while(listaJob!=NULL){

        if (job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->tempo = temp;
        }

        listaJob=listaJob->seguinte;

    }

    return 0;
}

Lista* removerjob(Lista* listaJob, int job){

    Lista *aux = listaJob;

    while (aux!=NULL){

        if (aux->job == job){

            listaJob = removerop(listaJob, job, aux->operacao);
            aux = listaJob;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removerop(Lista* listaJob, int job, int op){

    Lista *aux = listaJob;

    while (aux != NULL){

        if (aux->job == job && aux->operacao == op){

            listaJob = removermaq(&listaJob, job, op, aux->maquina);

            aux = listaJob;
            aux = aux->seguinte;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removermaq(struct Lista** aux, int job, int op, int maq){

    struct Lista *atual = *aux, *anterior;
    int existe=0;

    if (atual->job == job && atual->operacao == op && atual->maquina==maq){

        *aux = atual->seguinte;
        free(atual);
        return *aux;
    }

    while(atual->seguinte != NULL){

        anterior = atual;
        atual = atual->seguinte;

        if (atual->job == job && atual->operacao == op && atual->maquina== maq){
            existe=1;
            break;
        }
    }

    if (atual == NULL)
        return *aux;

    else if (existe==0)
        return *aux;

    anterior->seguinte = atual->seguinte;

    free(atual);
    return *aux;
}
Lista* lerficheiro(Lista* listaJob){

    int i=0;
    int job, operacao, maquina, tempo;
    char conteudo[200];
    char texto[200];

    FILE * ficheiro;

    ficheiro = fopen("ola.txt","r");

    if (ficheiro != NULL) {

        while (fgets(conteudo, 200, ficheiro) != NULL) {

            sscanf(conteudo, "%s%d\n", &texto, &job);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &operacao);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &maquina);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &tempo);

            listaJob = inserirmaq(listaJob, job, operacao, maquina, tempo);

            i++;
        }
        fclose(ficheiro);

    }

    return listaJob;
}

void escreverficheiro(Lista* listaJob){

    FILE * ficheiro;

    ficheiro = fopen("ola.txt","w");

    while (listaJob != NULL){

        fprintf(ficheiro,"job: ");
        fprintf(ficheiro, "%d\n", listaJob->job);
        fprintf(ficheiro,"operacao: ");
        fprintf(ficheiro, "%d\n", listaJob->operacao);
        fprintf(ficheiro,"maquina: ");
        fprintf(ficheiro, "%d\n", listaJob->maquina);
        fprintf(ficheiro,"tempo: ");
        fprintf(ficheiro, "%d\n", listaJob->tempo);

        listaJob=listaJob->seguinte;
    }

    fclose(ficheiro);
}

void listarelementosjob(Lista* listaJob){

    while (listaJob!=NULL){

        printf("job: %d\n", listaJob->job);
        printf("operacao: %d\n", listaJob->operacao);
        printf("maquina: %d\n", listaJob->maquina);
        printf("tempo: %d\n", listaJob->tempo);
        printf("\n");
        listaJob=listaJob->seguinte;
    }

}

int verificarjob(Lista* listaJob, int job){

    while (listaJob != NULL){

        if (job == listaJob->job)

            return 1;

        listaJob = listaJob->seguinte;
    }
    return 0;
}

int verificarop(Lista * listaJob, int job, int op){

    while(listaJob != NULL){

        if ( job == listaJob->job && op==listaJob->operacao )

            return (1);

        listaJob=listaJob->seguinte;
    }

    return(0);
}

int verificarmaq(Lista * listaJob,  int job, int op, int maq){

    while(listaJob!=NULL){

        if (job == listaJob->job && op==listaJob->operacao && maq==listaJob->maquina)

            return (1);

        listaJob=listaJob->seguinte;
    }

    return(0);
}

int quantidadetempmax(Lista* listaJob){

    int op=0, maior = 0, soma = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){
            if (maior < listaJob->tempo)
                maior = listaJob->tempo;
        }

        else{
            soma = soma + maior;
            maior = 0;

            op = listaJob->operacao;
            maior = listaJob->tempo;
        }

        listaJob = listaJob->seguinte;
    }
    soma = soma + maior;

    return (soma);
}

int quantidadetempmin(Lista* listaJob){

    int op=0, menor = 0, soma = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){
            menor = 1000;
            if (menor > listaJob->tempo)
                menor = listaJob->tempo;
        }

        else{
            soma = soma + menor;
            menor = 0;

            op = listaJob->operacao;
            menor = listaJob->tempo;
        }

        listaJob = listaJob->seguinte;
    }

    return (soma);
}

int media(Lista* listaJob){

    int op = 0, somaOp = 0, cont = 0;
    float media = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){

            somaOp = somaOp + listaJob->tempo;
        }

        else{

            op = listaJob->operacao;
            somaOp = somaOp + listaJob->tempo;
        }

        cont ++;
        listaJob = listaJob->seguinte;
    }

    media = somaOp / cont;
    printf("esta e a media de tempo por operacao: %.1f\n", media);

    return (0);
}


