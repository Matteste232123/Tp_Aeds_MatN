#include "Lista.h"

void Cria_Nova_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras){

    lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS = (Apontador_Lista_Palavras)malloc(sizeof(TAD_CELULA_LISTA_PALAVRAS));
    lista_palavras->ptrULTIMO_LISTAPALAVRAS = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS;
    lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS = NULL;

}

int Confere_se_esta_Vazia_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras){

    if(lista_palavras->ptrULTIMO_LISTAPALAVRAS==lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS){
        return 0;
    }else{
        return 1;
    }

}

void Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras, char *word_listapalavras, int line_listapalavras){

    lista_palavras->ptrULTIMO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS = (Apontador_Lista_Palavras) malloc(sizeof(TAD_CELULA_LISTA_PALAVRAS));
    lista_palavras->ptrULTIMO_LISTAPALAVRAS = lista_palavras->ptrULTIMO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS;
    lista_palavras->ptrULTIMO_LISTAPALAVRAS->PALAVRA_LISTAPALAVRAS->linha = line_listapalavras;
    strcpy(lista_palavras->ptrULTIMO_LISTAPALAVRAS->PALAVRA_LISTAPALAVRAS->lista_caracteres,word_listapalavras);
    lista_palavras->ptrULTIMO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS = NULL;

}



void Remove_a_Palavra_do_Final_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras,tad_palavra *var){
    Apontador_Lista_Palavras paux;
    if(Confere_se_esta_Vazia_LISTAPALAVRAS(lista_palavras)){
        printf("\tLista Vazia!!\n");
    }else{
        var->linha = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS->PALAVRA_LISTAPALAVRAS->linha;
        strcpy(var->lista_caracteres,lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS->PALAVRA_LISTAPALAVRAS->lista_caracteres);
        paux = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS;
        lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS;
        free(paux);
        
    }

}

int Retorna_numero_de_Palavras_ListadePalavras(TAD_LISTA_PALAVRAS *lista_palavras){

    return lista_palavras->ptrULTIMO_LISTAPALAVRAS->PALAVRA_LISTAPALAVRAS->linha;
}

void Imprime_ListadePalavras(TAD_LISTA_PALAVRAS *lista_palavras){

    Apontador_Lista_Palavras paux;
    paux = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS;

    while(paux!=NULL){
        printf("\t%s\n",paux->PALAVRA_LISTAPALAVRAS->lista_caracteres);
        printf("\t%d\n",paux->PALAVRA_LISTAPALAVRAS->linha);
        paux = paux->ptrPROX_LISTAPALAVRAS;
    }
    


}

void Verifica_se_a_Palavra_esta_na_lista_LISTAPALAVRAS(TAD_LISTA_PALAVRAS *lista_palavras, char *word_listapalavras)
{
    
    if(lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS == lista_palavras->ptrULTIMO_LISTAPALAVRAS){
        printf("\tLista Vazia!!\n");
    }

    Apontador_Lista_Palavras ptrAUX_verificacao;
    ptrAUX_verificacao = lista_palavras->ptrPRIMEIRO_LISTAPALAVRAS->ptrPROX_LISTAPALAVRAS;

    while(ptrAUX_verificacao != NULL){
        if(!(strcmp(ptrAUX_verificacao->PALAVRA_LISTAPALAVRAS->lista_caracteres, word_listapalavras))){
            printf("\nA palavra esta na lista!!! :)\n");
            
        }
        else{
            printf("\nPalavra não encontrada foi encontrado :(\n");
            
        }
        
        /* Atualiza o ponteiro para a proxima posição da lista */
        ptrAUX_verificacao = ptrAUX_verificacao->ptrPROX_LISTAPALAVRAS;
    }

}
