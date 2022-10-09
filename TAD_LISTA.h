#include "TAD_PALAVRA.h"
struct lista{

    Lista_de_Palavra *lp;

}typedef lista;

typedef struct celula_lista *Apontador;

struct celula_lista{

    lista T_lista;

    struct celula_lista* next;

}typedef celula_lista;

struct Lista_lista{

    Apontador primeiro;
    Apontador ultimo;
    int num_palavras;

}typedef Lista_lista;

void criar_nova_lista(Lista_lista *ll);

void contagem_palavras(Lista_lista *ll,FILE *fp);

void remove_palavra(Lista_lista *ll,char *word,palavra *pp);

void remove_palavra_final(Lista_lista *ll,palavra *pp);

int verificar_palavra(Lista_lista *ll,char *word);

int retorna_num_palavra(Lista_lista *ll);

void imprime_linha(Lista_lista *ll,Lista_de_Palavra *var);
