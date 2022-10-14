#include "Dicionario.h"

void inicializar_dicionario(Tad_Dicionario *dd){
    for(int i = 0;i<26;i++){
        Cria_Nova_LISTAPALAVRAS(dd->componente_dicionario[i]);
        
    }
}

void construir_dicionario(Tad_Dicionario *dd,tad_palavra *var){

    char string_suporte[1000];
    int count_lines = 0,j = 0;

    FILE *fp;
    fp = fopen("entrada.txt","r");

    while(fgets(string_suporte,1000,fp)){count_lines += 1;}

    fseek(fp,0,SEEK_SET);

    char string[count_lines][1000];

    while(fgets(string[j],1000,fp)){j+=1;}

    fseek(fp,0,SEEK_SET);


    for(int i = 0;i<j;i++){
        char *p = strtok(string[i]," ,.-!");
        while(p!=NULL){

            preenche_tad_palavra(var,p,i+1);

            if(p[0]=='a'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[0],var->lista_caracteres,var->linha);}
            if(p[1]=='b'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[1],var->lista_caracteres,var->linha);}
            if(p[1]=='c'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[2],var->lista_caracteres,var->linha);}
            if(p[1]=='d'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[3],var->lista_caracteres,var->linha);}
            if(p[1]=='e'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[4],var->lista_caracteres,var->linha);}
            if(p[1]=='f'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[5],var->lista_caracteres,var->linha);}
            if(p[1]=='g'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[6],var->lista_caracteres,var->linha);}
            if(p[1]=='h'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[7],var->lista_caracteres,var->linha);}
            if(p[1]=='i'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[8],var->lista_caracteres,var->linha);}
            if(p[1]=='j'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[9],var->lista_caracteres,var->linha);}
            if(p[1]=='k'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[10],var->lista_caracteres,var->linha);}
            if(p[1]=='l'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[11],var->lista_caracteres,var->linha);}
            if(p[1]=='m'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[12],var->lista_caracteres,var->linha);}
            if(p[1]=='n'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[13],var->lista_caracteres,var->linha);}
            if(p[1]=='o'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[14],var->lista_caracteres,var->linha);}
            if(p[1]=='p'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[15],var->lista_caracteres,var->linha);}
            if(p[1]=='q'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[16],var->lista_caracteres,var->linha);}
            if(p[1]=='r'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[17],var->lista_caracteres,var->linha);}
            if(p[1]=='s'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[18],var->lista_caracteres,var->linha);}
            if(p[1]=='t'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[19],var->lista_caracteres,var->linha);}
            if(p[1]=='u'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[20],var->lista_caracteres,var->linha);}
            if(p[1]=='v'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[21],var->lista_caracteres,var->linha);}
            if(p[1]=='w'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[22],var->lista_caracteres,var->linha);}
            if(p[1]=='x'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[23],var->lista_caracteres,var->linha);}
            if(p[1]=='y'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[24],var->lista_caracteres,var->linha);}
            if(p[1]=='z'){Insere_Nova_Palavra_no_Final_LISTAPALAVRAS(dd->componente_dicionario[25],var->lista_caracteres,var->linha);}

            p = strtok(string[i]," ,.!-");
        }
    }

}
