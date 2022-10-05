#include "Tad_lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cria_lista_lista(lista_de_lista *ll){

    ll->primeiro = (cl) malloc(sizeof(cel_lista));
    ll->ultimo = ll->primeiro;
    ll->primeiro->proximo = NULL;

}

int lista_lista_vazia(lista_de_lista *ll){

    return(ll->primeiro==ll->ultimo);

}

void insere_na_lista(lista_de_lista *ll,T_lista *tl){

    ll->ultimo->proximo = (cl) malloc(sizeof(cel_lista));
    ll->ultimo = ll->ultimo->proximo;
    ll->ultimo->variavel_cel_lista = *tl;
    ll->ultimo->variavel_cel_lista.num_palavra = ll->ultimo->variavel_cel_lista.num_palavra + 1;
    ll->primeiro->proximo = NULL;

}

int remove_palavra(lista_de_lista *ll,T_lista *tl){

    cel_lista* Pc;
    if(lista_lista_vazia(ll)){
        return 0;
    }
    *tl = ll->primeiro->proximo->variavel_cel_lista;
    ll->ultimo->variavel_cel_lista.num_palavra = ll->ultimo->variavel_cel_lista.num_palavra - 1;
    Pc = ll->primeiro;
    ll->primeiro = ll->primeiro->proximo;
    free(Pc);

    return 1;

}

int remove_palavra_final(lista_de_lista *ll,T_lista *tl,char *c){

    cel_lista* Pc;
    if(lista_lista_vazia(ll)){
        return 0;
    }
    Pc = ll->primeiro->proximo;
    while(ll != NULL){
        if(!(strcmp(ll->ultimo->variavel_cel_lista.pl->ultimo->tp.caractere,c))){
            ll->ultimo->variavel_cel_lista.num_palavra = ll->ultimo->variavel_cel_lista.num_palavra - 1;
            *tl = ll->primeiro->proximo->variavel_cel_lista;
            Pc = ll->primeiro;
            ll->primeiro = ll->primeiro->proximo;

            free(Pc);
            return 1;
        }
        }
}
void verifica_palavra(lista_de_lista *ll,char *c){

        while(ll != NULL){
            if(!(strcmp(ll->ultimo->variavel_cel_lista.pl->ultimo->tp.caractere,c))){
                printf("\tPalavra presente na lista!");
            }else{
                printf("\tPalavra não encontrada!\n");
            }
        }
}

int total_palavras(lista_de_lista *ll){

    return ll->ultimo->variavel_cel_lista.num_palavra;
}

void imprime_lista(lista_de_lista *ll,Palavra_lista *var,T_lista_linha *tl){
    printf("\t%d\n",total_palavras(ll));
    imprime_palavra(var,tl);
}

