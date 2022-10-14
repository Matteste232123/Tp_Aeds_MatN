#include "Tad_Palavra.h"

void cria_palavra(TAD_PALAVRA *var){

    var->primeiro = (apontador) malloc(sizeof(Palavra_celula));
    var->ultimo = var->primeiro;
    var->primeiro->next = NULL;

}

void preenche_tad_palavra(TAD_PALAVRA *var,char *string,int line){

    var->ultimo->next = (apontador) malloc(sizeof(Palavra_celula));
    var->ultimo = var->ultimo->next;
    strcpy(var->ultimo->PALAVRA->lista_caracteres,string);
    var->ultimo->PALAVRA->linha = line;
    var->ultimo->next = NULL;

}

char* retorna_caracteres(TAD_PALAVRA *var){

    return var->ultimo->PALAVRA->lista_caracteres;

}

void imprime_caracteres(TAD_PALAVRA *var){

    apontador paux;
    paux = var->primeiro->next;
    while(paux != NULL){
        printf("\t%s\n",paux->PALAVRA->lista_caracteres);
        paux = paux->next;
    }

    
}

void imprime_palavra(TAD_PALAVRA *var){

    apontador paux;
    paux = var->primeiro->next;
    while(paux != NULL){
        printf("\t%s\n",paux->PALAVRA->lista_caracteres);
        printf("\t[%d]\n",paux->PALAVRA->linha);
        paux = paux->next;
    }

   
}
