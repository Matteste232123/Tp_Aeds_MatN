#include <stdio.h>
#include <stdlib.h>

struct palavra{

    int linha;
    char lista_caracteres[1000];
    //FILE *arq;

}typedef palavra;

typedef struct celula_palavra *apontador;

typedef struct celula_palavra{

    palavra T_palavra;
    struct celula_palavra* next; 

}celula_palavra;

typedef struct Lista_de_Palavra{
    
    //endereços para os membros da lista encadeada;

    apontador primeiro; 
    apontador ultimo;

}Lista_de_Palavra;

void inicializar_palavra(Lista_de_Palavra *var);

int palavra_vazia(Lista_de_Palavra *var);

void insere_caracteres(Lista_de_Palavra *var,FILE *fp);

char* retorna_caracteres(Lista_de_Palavra *var);

void imprime_caracteres(Lista_de_Palavra *var);

void imprime_palavra(Lista_de_Palavra *var);
