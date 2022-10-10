#include <stdio.h>
#include <stdlib.h>

struct palavra{

    int linha;
    char lista_caracteres[1000];
    //componentes de palavra,string e a linha onde está presente;

}typedef palavra;

typedef struct celula_palavra *apontador;
//celula cabeça

typedef struct celula_palavra{

    palavra T_palavra;
    struct celula_palavra* next; //aponta para a proxima celula

}celula_palavra;

typedef struct Lista_de_Palavra{
    
    //endereços para os membros da lista encadeada;

    apontador primeiro; 
    apontador ultimo;
    //componentes da lista_palavra

}Lista_de_Palavra;

void inicializar_palavra(Lista_de_Palavra *var);

void retira_palavra(Lista_de_Palavra *var,palavra *word);

int palavra_vazia(Lista_de_Palavra *var);

void insere_caracteres(Lista_de_Palavra *var,char *word,int line);

const char* retorna_caracteres(Lista_de_Palavra *var);

void imprime_caracteres(Lista_de_Palavra *var);

void imprime_palavra(Lista_de_Palavra *var);
