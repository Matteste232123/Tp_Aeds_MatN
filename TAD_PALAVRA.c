#include "Tad_Palavra.h"

void cria_palavra(tad_palavra *var){

    var->linha = 0;
    strcpy(var->lista_caracteres," ");

}

void preenche_tad_palavra(tad_palavra *var,char *string,int line){
    strcpy(var->lista_caracteres,string);
    var->linha = line;
    }

char* retorna_caracteres(tad_palavra *var){
    return var->lista_caracteres;
}

void imprime_caracteres(tad_palavra *var){
    printf("\t >>> %s \n",var->lista_caracteres);
}

void imprime_palavra(tad_palavra *var){

    printf("\t >>> %s \n",var->lista_caracteres);
    printf("\t >>> %d\n",var->linha);

}
