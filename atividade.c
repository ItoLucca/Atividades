#include "atividade.h"

int inserir_numeros(int *ultima_posicao, int lista_soma[]){
    do{
        printf("Digite um numero para que seja realizada a soma: \n");
    }
    while(scanf("%d", &lista_soma[*ultima_posicao]) == 1) {
        (*ultima_posicao)++;
    }
}

int Soma(int *ultima_posicao, int lista_soma[]){
    
}