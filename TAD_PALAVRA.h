#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char lista_caracteres[1000];
    int linha;

}tad_palavra;

typedef struct Palavra_celula *apontador;

struct Palavra_celula{

    tad_palavra *PALAVRA;
    struct Palavra_celula* next;

}typedef Palavra_celula;

struct TAD_PALAVRA{

    apontador primeiro;
    apontador ultimo;

}typedef TAD_PALAVRA;

void cria_palavra(TAD_PALAVRA *var);

void preenche_tad_palavra(TAD_PALAVRA *var,char *string,int line);

char* retorna_caracteres(TAD_PALAVRA *var);

void imprime_caracteres(TAD_PALAVRA *var);

void imprime_palavra(TAD_PALAVRA *var);
