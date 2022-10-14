#include "Lista.h"

struct Tad_Dicionario{

    TAD_LISTA_PALAVRAS* componente_dicionario[26];

}typedef Tad_Dicionario;

void inicializar_dicionario(Tad_Dicionario *dd);

void construir_dicionario(Tad_Dicionario *dd,tad_palavra *var);
