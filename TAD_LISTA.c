#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_LISTA.h"

void criar_nova_lista(Lista_lista *ll){

    ll->primeiro = (Apontador) malloc(sizeof(celula_lista));
    ll->ultimo = ll->primeiro;
    ll->primeiro->next = NULL;
    ll->num_palavras = 0;

}

void contagem_palavras(Lista_lista *ll,FILE *fp){

    char file_contents[1000];

    while(fscanf(fp, "%[^-\n ] ", file_contents) != EOF){

        ll->num_palavras +=1;

    }
    
}

void remove_palavra(Lista_lista *ll,char *word,palavra *pp){
    Apontador paux;
    paux = ll->primeiro->next;
    while(paux!=NULL){
        if(!(strcmp(paux->T_lista.lp->ultimo->T_palavra.lista_caracteres,word))){
            strcpy(paux->T_lista.lp->ultimo->T_palavra.lista_caracteres,NULL);
            ll->num_palavras =- 1;
        }
    strcpy(pp->lista_caracteres,word);
    paux = ll->primeiro;
    ll->primeiro = ll->primeiro->next;
    free(ll); 
    }
}

void remove_palavra_final(Lista_lista *ll,palavra *pp){

    Apontador paux;
    paux = ll->primeiro->next;
    while(paux!=NULL){
        strcpy(pp->lista_caracteres,paux->T_lista.lp->ultimo->T_palavra.lista_caracteres);
        strcpy(paux->T_lista.lp->ultimo->T_palavra.lista_caracteres,NULL);
        ll->num_palavras =-1;
    }
    paux = ll->primeiro;
    ll->primeiro = ll->primeiro->next;
    free(ll);

}

int verificar_palavra(Lista_lista *ll,char *word){

    Apontador paux;
    paux = ll->primeiro->next;
    while(paux!=NULL){
        if(!(strcmp(paux->T_lista.lp->ultimo->T_palavra.lista_caracteres,word))){
            return 0;
        }else{
            return 1;
        }
    }
}

int retorna_num_palavra(Lista_lista *ll){

    return ll->num_palavras;
}


void imprime_linha(Lista_lista *ll,Lista_de_Palavra *var){

    printf("\tQUANTIDADE TOTAL DE PALAVRAS: ",ll->num_palavras);
    imprime_palavra(var);


}
