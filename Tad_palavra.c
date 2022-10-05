#include "Tad_palavra.h"
#include "string.h"
#include "stdio.h"
void cria_lista_palavra(Palavra_lista *var){

    var->primeiro = (apontador) malloc(sizeof(cel_palavra)); 
    var->ultimo = var->primeiro;
    var->primeiro->next = NULL;

}

int lista_palavra_vazia(Palavra_lista *var){

    return (var->primeiro==var->ultimo);
}

void insere_caracteres(Palavra_lista *var,T_palavra *word){

    var->ultimo->next = (apontador) malloc(sizeof(cel_palavra));
    var->ultimo = var->ultimo->next;
    var->ultimo->tp = *word;
    var->primeiro->next = NULL;
    

}

char* retorna_caracteres(Palavra_lista *var){

    return var->ultimo->tp;

}

void imprime_caracteres(Palavra_lista *var){

    printf("\t%s\n",var->ultimo->tp);

}

void imprime_palavra(Palavra_lista *var,T_lista_linha *tl){
    imprime_caracteres(var);
    imprime_linhas(tl);
}