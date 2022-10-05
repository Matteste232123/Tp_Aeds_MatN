#include "Tad_linha.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct T_palavra{

    char caractere[1000];

}T_palavra;

typedef struct cel_palavra *apontador;

typedef struct cel_palavra{

    T_palavra tp;
    struct cel_palavra* next;

}cel_palavra;

typedef struct Palavra_lista{

    apontador primeiro;
    apontador ultimo;

}Palavra_lista;

void cria_lista_palavra(Palavra_lista *var);

int lista_palavra_vazia(Palavra_lista *var);

void insere_caracteres(Palavra_lista *var,T_palavra *word);

char* retorna_caracteres(Palavra_lista *var);

void imprime_caracteres(Palavra_lista *var);

void imprime_palavra(Palavra_lista *var,T_lista_linha *tl);


