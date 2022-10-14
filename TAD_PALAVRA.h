#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char lista_caracteres[1000];
    int linha;

}tad_palavra;


void cria_palavra(tad_palavra *var);

void preenche_tad_palavra(tad_palavra *var,char *string,int line);

char* retorna_caracteres(tad_palavra *var);

void imprime_caracteres(tad_palavra *var);

void imprime_palavra(tad_palavra *var);
