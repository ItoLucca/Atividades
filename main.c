#include <stdio.h>
#include <string.h>
#include "atividade.h"

int main(){
    int *ultima_posicao = 0;
    int opcao;
    int lista_soma[100];
    int soma = 0;

    printf("digite(1) --> para inserir os numeros\n digite(2) --> para apresentar a resposta ");
    scanf("%d",&opcao);


    if(opcao = 1){
        inserir_numeros(&ultima_posicao, lista_soma);
    }

    else if(opcao = 2){
        soma = Soma(ultima_posicao, lista_soma);
        printf("A soma é igual a: %i \n", &lista_soma);
    }
    return 0;
}