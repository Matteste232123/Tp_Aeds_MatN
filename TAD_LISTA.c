#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "TAD_LISTA.h"

void criar_nova_lista(Lista *ll){

    ll->primeiro = (Apontador) malloc(sizeof(celula_lista));
    ll->ultimo = ll->primeiro;
    ll->num_palavras = 0;
    ll->primeiro->next = NULL;

} //ok

int lista_esta_vazia(Lista *ll){

    return(ll->primeiro==ll->ultimo);

} //ok

void insere_palavra(Lista *ll,Lista_de_Palavra *var){

    ll->ultimo->next = (Apontador) malloc(sizeof(celula_lista));
    ll->ultimo = ll->ultimo->next;
    ll->ultimo->Tad_palavra = var;
    ll->num_palavras +=1;
    ll->ultimo->next = NULL;

} //ok

int retorna_num_palavra(Lista *ll){

    return ll->num_palavras;

} //ok
void remove_palavra(Lista *ll,char *word){

}

void remove_palavra_final(Lista *ll, Lista_de_Palavra *pp,palavra *word){
    celula_lista *ptr;
    if(ll->primeiro == ll->ultimo){
        printf("\tLista vazia!\n");
    }else{
        pp = ll->primeiro->next->Tad_palavra;
        ptr = ll->primeiro;
        ll->primeiro = ll->primeiro->next;
        retira_palavra(pp,word);
        ll->num_palavras -= 1;
        free(ptr);
       
    }
} //ok


int verificar_palavra(Lista *ll,char *word){

    Apontador paux;
    //apontador pp;
    paux = ll->primeiro->next;
    //pp = var->primeiro->next;
    while(paux!=NULL){
        if(!(strcmp(word,paux->Tad_palavra->ultimo->T_palavra.lista_caracteres))){
        
            return 1;
        }
        //pp = pp->next;
        //paux =paux->Tad_palavra->ultimo->next; // --> seria o ideal,volta apontador
        paux = paux->next;
    }
    return 0;



}

void imprime_lista(Lista *ll,Lista_de_Palavra *var){

    Apontador paux;
    paux = ll->primeiro->next;
    retorna_num_palavra(ll);
    while(paux!=NULL){
        imprime_caracteres(var);
        //pp = pp->next;
        paux = paux->next; // --> seria o ideal,volta apontador
    }

}
