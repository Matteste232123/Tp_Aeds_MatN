#include "Tad_palavra.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct T_lista{

    Palavra_lista *pl;
    int num_palavra;

}T_lista;

typedef struct cel_lista *cl;

typedef struct cel_lista{

    T_lista variavel_cel_lista;
    struct cel_lista *proximo;

}cel_lista;

typedef struct lista_de_lista{

    cl primeiro;
    cl ultimo;

}lista_de_lista;

void cria_lista_lista(lista_de_lista *ll);

int lista_lista_vazia(lista_de_lista *ll);

void insere_na_lista(lista_de_lista *ll,T_lista *tl);

int remove_palavra(lista_de_lista *ll,T_lista *tl);

int remove_palavra_final(lista_de_lista *ll,T_lista *tl,char* c);

int verifica_palavra(lista_de_lista *ll,char *c);

int total_palavras(lista_de_lista *ll);

void imprime_lista(lista_de_lista *ll,Palavra_lista *var,T_lista_linha *tl);