#include <stdio.h>

typedef struct Lista{ 
    int job;
    int operacao;
    int maquina;
    int tempo;
    struct Lista* seguinte;
}Lista;

int menuPrincipal();
Lista* inserirMaquina(Lista* listaJob, int job,int op, int maq, int temp); 
int alterarJob(Lista* listaJob, int job, int jobNovo);
int alterarOperacao(Lista* listaJob, int job, int op, int opNova);
int alterarMaquina(Lista* listaJob, int job, int op, int maq, int maqNova);
int alterarTempo(Lista* listaJob, int job, int op, int maq, int temp);
Lista* removerJob(Lista* listaJob, int job);
Lista* removerOperacao(Lista* listaJob, int job, int op);
Lista* removerMaquina(struct Lista** aux, int job, int op, int maq);
Lista* lerFicheiro(Lista* listaJob); 
void escreverFicheiro(Lista* listaJob); 
void listarJob(Lista* listaJob); 
int verificarJob(Lista* listaJob, int job);
int verificarOperacao(Lista* listaJob, int job, int op); 
int verificarMaquina(Lista* listaJob, int job, int op, int maq); 
int verMaior(Lista* listaJob);
int verMenor(Lista* listaJob);
int verMedia(Lista* listaJob);