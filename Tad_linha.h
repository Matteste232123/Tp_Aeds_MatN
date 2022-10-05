
#include <stdio.h>
#include <stdlib.h>

typedef struct T_linha_{
    int num; //numero das linhas
}T_linha;


typedef struct cel_linha_* Apontador;


typedef struct cel_linha_{
    T_linha tl;
    //indica qual "listas" está apontado
    struct cel_linha* prox;
}cel_linha; //celula da lista


typedef struct{
    Apontador primeiro;
    Apontador ultimo; //tamanho da lista
}T_lista_linha;


//cria a lista
void cria_lista_linhas(T_lista_linha *var);

//verifica se a lista está vazia,aponta apenas para NULL
int lista_linhas_vazia(T_lista_linha *var);

//aloca na lista
void aloca_lista_linhas(T_lista_linha *var,T_linha *cont);

//imprime todo o conteudo alocado+
void imprime_linhas(T_lista_linha *var);
