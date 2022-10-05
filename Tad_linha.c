#include "Tad_linha.h"
#include "stdio.h"
#include "stdlib.h"

void cria_lista_linhas(T_lista_linha *var){

    var->primeiro = (Apontador) malloc(sizeof(cel_linha));
    var->ultimo = var->primeiro;
    var->primeiro->prox = NULL;

}

int lista_linhas_vazia(T_lista_linha *var){

    return (var->primeiro==var->ultimo);

}

void aloca_lista_linhas(T_lista_linha *var,T_linha *cont){

    var->ultimo->prox = (Apontador) malloc(sizeof(cel_linha));
    var->ultimo = var->ultimo->prox;
    var->ultimo->tl = *cont;
    var->ultimo->prox = NULL;

}

void imprime_linhas(T_lista_linha *var){

    Apontador pA;
    pA = var->primeiro->prox;
    while(pA != NULL){

        printf("\t%d\n", pA->tl.num);
        pA = pA->prox; // próxima célula 


    }

}
