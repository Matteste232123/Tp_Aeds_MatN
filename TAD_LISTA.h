#include "TAD_PALAVRA.h"
typedef struct celula_lista *Apontador;

struct celula_lista{

    Lista_de_Palavra *Tad_palavra;
    //celula_palavra cel;

    Apontador next;

}typedef celula_lista;

struct Lista{

    Apontador primeiro;
    Apontador ultimo;
    int num_palavras;

}typedef Lista;

void criar_nova_lista(Lista *ll);

int lista_esta_vazia(Lista *ll);

void insere_palavra(Lista *ll,Lista_de_Palavra *var);

void remove_palavra(Lista *ll,char *word);

void remove_palavra_final(Lista *ll,Lista_de_Palavra *pp,palavra *word);

int verificar_palavra(Lista *ll,char *word);

int retorna_num_palavra(Lista *ll);

void imprime_lista(Lista *ll,Lista_de_Palavra *var);
