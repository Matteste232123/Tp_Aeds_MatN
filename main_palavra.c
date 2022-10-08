#include "TAD_PALAVRA.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    Lista_de_Palavra vet;
    FILE *ff = fopen("entrada.txt","r");
    inicializar_palavra(&vet);
    insere_caracteres(&vet,ff);
    imprime_caracteres(&vet);
  
    
    return 0;

}
