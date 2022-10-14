#include "Tad_Palavra.h"

typedef struct Celula_Lista_Palavras* Apontador_Lista_Palavras;

typedef struct Celula_Lista_Palavras{
    tad_palavra *PALAVRA_LISTAPALAVRAS;
    Apontador_Lista_Palavras ptrPROX_LISTAPALAVRAS;
}TAD_CELULA_LISTA_PALAVRAS;

typedef struct{
    Apontador_Lista_Palavras ptrPRIMEIRO_LISTAPALAVRAS, ptrULTIMO_LISTAPALAVRAS;

}TAD_LISTA_PALAVRAS;


void Cria_Nova_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras);
int Confere_se_esta_Vazia_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras);

void Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras, char *word_listapalavras, int line_listapalavras);

void Remove_a_Palavra_dada_a_Palavra_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras, char *word_listapalavras);
void Remove_a_Palavra_do_Final_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras,tad_palavra *var);

void Verifica_se_a_Palavra_esta_na_lista_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras, char *word_listapalavras);

int Retorna_numero_de_Palavras_ListadePalavras(TAD_LISTA_PALAVRAS *lista_palavras);

void Imprime_ListadePalavras(TAD_LISTA_PALAVRAS *lista_palavras);
