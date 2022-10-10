#include "TAD_PALAVRA.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>


void inicializar_palavra(Lista_de_Palavra *var){

    var->primeiro = (apontador) malloc(sizeof(celula_palavra)); //cria o componente
    var->ultimo = var->primeiro; 
    var->ultimo->T_palavra.linha = 1; //inicializa o int linha
    var->primeiro->next = NULL; //proxima celula

}

int palavra_vazia(Lista_de_Palavra *var){

    return (var->ultimo==var->primeiro);

}

void retira_palavra(Lista_de_Palavra *var,palavra *word){

    celula_palavra *pa;
    *word = var->primeiro->next->T_palavra;
    pa = var->primeiro;
    var->primeiro = var->primeiro->next;
    free(pa);

}

void insere_caracteres(Lista_de_Palavra *var,char *word,int line){
      
      var->ultimo->next = (apontador)malloc(sizeof(celula_palavra));
      var->ultimo = var->ultimo->next;
      strcpy(var->ultimo->T_palavra.lista_caracteres,word);
      var->ultimo->T_palavra.linha = line;
      var->ultimo->next = NULL;

    }

const char* retorna_caracteres(Lista_de_Palavra *var){
    char *string_retorno;
    apontador paux;
    paux = var->primeiro->next; //encera quando chegar no ultimo da lista,o que aponta para NULL
    while(paux!=NULL){
        string_retorno = (char*) malloc(sizeof(char));
        strcpy(string_retorno,var->ultimo->T_palavra.lista_caracteres);
        paux = paux->next; //avança na lista

    }
    return string_retorno;

   

}

void imprime_caracteres(Lista_de_Palavra *var){


    apontador paux;
    paux = var->primeiro->next; //encera quando chegar no ultimo da lista,o que aponta para NULL
    while(paux!=NULL){

        printf("\t%s\n",paux->T_palavra.lista_caracteres);
        paux = paux->next; //avança na lista

    }

}

void imprime_palavra(Lista_de_Palavra *var){

    apontador paux;
    paux = var->primeiro->next; //encera quando chegar no ultimo da lista,o que aponta para NULL
    while(paux != NULL){
        printf("\t%s %d\n",paux->T_palavra.lista_caracteres,paux->T_palavra.linha);
        paux = paux->next; //avança na lista
    }

}
