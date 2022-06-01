#include <stdio.h>

typedef struct Lista{
    int job,operacao,maquina,tempo;
    struct Lista* seguinte;
}Lista;

int menu();
Lista* inserirmaq(Lista* listajob, int job,int op, int maq, int temp);
int alterarjob(Lista* listajob, int job, int jobNovo);
int alterarop(Lista* listajob, int job, int op, int opNova);
int alterarmaq(Lista* listajob, int job, int op, int maq, int maqNova);
int alterartemp(Lista* listajob, int job, int op, int maq, int temp);
Lista* removerjob(Lista* listajob, int job);
Lista* removerop(Lista* listajob, int job, int op);
Lista* removermaq(struct Lista** aux, int job, int op, int maq);
Lista* lerficheiro(Lista* listajob);
void escreverficheiro(Lista* listajob);
void listarelementosjob(Lista* listajob);
int verificarjob(Lista* listajob, int job);
int verificarop(Lista* listajob, int job, int op);
int verificarmaq(Lista* listajob, int job, int op, int maq);
int quantidadetempmax(Lista* listajob);
int quantidadetempmin(Lista* listajob);
int media(Lista* listajob);


