#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"

Lista* inserirMaquina(Lista* listaJob, int job,int op, int maq, int temp){

    Lista* novo = (Lista*) malloc(sizeof(Lista));
    Lista* aux = listaJob;

    if (aux==NULL){
        novo->seguinte = aux;
        aux = novo;
        novo->job = job;
	    novo->operacao=op;
        novo->maquina=maq;
        novo->tempo=temp;


        return aux;
    }
    else{

        while (aux->seguinte!=NULL && aux->seguinte->operacao < novo->operacao){
            aux = aux->seguinte;
        }

        novo->seguinte = aux->seguinte;
        aux->seguinte = novo;
        novo->job = job;
	    novo->operacao=op;
        novo->maquina=maq;
        novo->tempo=temp;


        return listaJob;
    }
}

int alterarJob(Lista* listaJob, int job, int jobNovo){

    while (listaJob != NULL){

        if (job == listaJob->job){

            listaJob->job = jobNovo;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarOperacao(Lista* listaJob, int job, int op, int opNova){

    while(listaJob != NULL){

        if (job == listaJob->job && op == listaJob->operacao){

            listaJob->operacao = opNova;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarMaquina(Lista* listaJob, int job, int op, int maq, int maqNova){

    while(listaJob!=NULL){

        if ( job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->maquina = maqNova;
        }

        listaJob=listaJob->seguinte;
    }

    return 0;
}

int alterarTempo(Lista* listaJob, int job, int op, int maq, int temp){

    while(listaJob!=NULL){

        if (job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->tempo = temp;
        }

        listaJob=listaJob->seguinte;

    }

    return 0;
}

Lista* removerJob(Lista* listaJob, int job){

    Lista *aux = listaJob;

    while (aux!=NULL){

        if (aux->job == job){

            listaJob = removerOperacao(listaJob, job, aux->operacao);
            aux = listaJob;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removerOperacao(Lista* listaJob, int job, int op){

    Lista *aux = listaJob;

    while (aux != NULL){

        if (aux->job == job && aux->operacao == op){

            listaJob = removerMaquina(&listaJob, job, op, aux->maquina);

            aux = listaJob;
            aux = aux->seguinte;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removerMaquina(struct Lista** aux, int job, int op, int maq){

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

Lista* lerFicheiro(Lista* listaJob){

    int i=0;
    int job, operacao, maquina, tempo;
    char conteudo[200];
    char texto[200];

    FILE * ficheiro;

    ficheiro = fopen("Job.txt","r"); 

    if (ficheiro != NULL) {

        while (fgets(conteudo, 200, ficheiro) != NULL) {

            sscanf(conteudo, "%s%d\n", &texto, &job);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &operacao); 

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &maquina);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &tempo);

            listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo); 

            i++;
        }
        fclose(ficheiro);

    }

    return listaJob;
}

void escreverFicheiro(Lista* listaJob){

    FILE * ficheiro; 

    ficheiro = fopen("Job.txt","w"); 

    while (listaJob != NULL){

        fprintf(ficheiro,"Job: ");
        fprintf(ficheiro, "%d\n", listaJob->job);
        fprintf(ficheiro,"Operacao: ");
        fprintf(ficheiro, "%d\n", listaJob->operacao);
        fprintf(ficheiro,"Maquina: ");
        fprintf(ficheiro, "%d\n", listaJob->maquina);
        fprintf(ficheiro,"Tempo: ");
        fprintf(ficheiro, "%d\n", listaJob->tempo);

        listaJob=listaJob->seguinte; 
    }

    fclose(ficheiro);
}

void listarJob(Lista* listaJob){

    while (listaJob!=NULL){

        printf("     Job: %d\n", listaJob->job);
        printf("Operacao: %d\n", listaJob->operacao);
        printf(" Maquina: %d\n", listaJob->maquina);
        printf("   Tempo: %d\n", listaJob->tempo);
        printf("\n");
        listaJob=listaJob->seguinte;
    }

}

int verificarJob(Lista* listaJob, int job){

    while (listaJob != NULL){

        if (job == listaJob->job)

            return 1;

        listaJob = listaJob->seguinte;
    }
    return 0;
}

int verificarOperacao(Lista * listaJob, int job, int op){

    while(listaJob != NULL){

        if ( job == listaJob->job && op==listaJob->operacao ) 

            return (1); 

        listaJob=listaJob->seguinte;
    }

    return(0);  
}

int verificarMaquina(Lista * listaJob,  int job, int op, int maq){

    while(listaJob!=NULL){

        if (job == listaJob->job && op==listaJob->operacao && maq==listaJob->maquina) 

            return (1); 

        listaJob=listaJob->seguinte;
    }

    return(0);  
}

int verMaior(Lista* listaJob){

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

int verMenor(Lista* listaJob){

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

int verMedia(Lista* listaJob){

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
    printf("A media de tempo por operacao e: %.1f\n", media);

    return (0);
}
