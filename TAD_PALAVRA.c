#include "TAD_PALAVRA.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>


void inicializar_palavra(Lista_de_Palavra *var){
    var->primeiro = (apontador) malloc(sizeof(celula_palavra)); 
    var->ultimo = var->primeiro;
   // var->ultimo->T_palavra.arq = file;
    var->ultimo->T_palavra.linha = 1;
    var->primeiro->next = NULL;

}

int palavra_vazia(Lista_de_Palavra *var){

    return (var->ultimo==var->primeiro);
}

void insere_caracteres(Lista_de_Palavra *var,FILE *in_file){

    var->ultimo->next = (apontador) malloc(sizeof(celula_palavra));
    var->ultimo = var->ultimo->next;
    char string_suporte[1000];
    int line = 0,i = 0;
    if (!in_file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    for(char c = fgetc(in_file);c!=EOF;c = getc(in_file)){
        if(c == '\n'){
            
            line +=1;

        }
    }

    fseek(in_file,0,SEEK_SET);

    char string[line][1000];
    
    while((fgets(string_suporte,1000,in_file))){

        strcpy(string[i],string_suporte);

        i ++;

    }

    i = 0;

    while(i<line+1){

        char* p = strtok(string[i]," -,.!");

        while (p != NULL){

            strcpy(var->ultimo->T_palavra.lista_caracteres,string[i]);

            var->ultimo->T_palavra.linha = i+1;

            printf ("%s %d\n",p,i+1);

            p = strtok (NULL, " ,.-");

            var->ultimo->next = NULL;
            
            }
        i++;
    }


    fclose(in_file);
    exit(EXIT_SUCCESS);
    }

char* retorna_caracteres(Lista_de_Palavra *var){

}

void imprime_caracteres(Lista_de_Palavra *var){
    apontador paux;
    paux = var->primeiro->next;
    while(paux != NULL){
        printf("\t%s\n",paux->T_palavra.lista_caracteres);
        paux = paux->next;
    }
}

void imprime_palavra(Lista_de_Palavra *var){
    apontador paux;
    paux = var->primeiro->next;
    while(paux != NULL){
        printf("\t%s %d\n",paux->T_palavra.lista_caracteres,paux->T_palavra.linha);
        paux = paux->next;
    }

}
