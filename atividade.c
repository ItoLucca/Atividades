#include "atividade.h"

int inserir_numeros(int *ultima_posicao, int lista_soma[]){
    int numero;

    do{
        printf("Digite um numero para que seja realizada a soma: \n");
        scanf("%d", &numero);
        (*ultima_posicao)++;

    } while(("%d", &lista_soma[*ultima_posicao]) == 1);
}

int Soma(int *ultima_posicao, int lista_soma[]){
    int soma;

    for(int i = 0 ; i < *ultima_posicao ; i++){
        soma = lista_soma[i + 1];
    }
    return soma;
}