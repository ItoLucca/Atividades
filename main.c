#include <stdio.h>
#include <string.h>
#include "atividade.h"

int main(){
    int *ultima_posicao, opcao;
    int lista_soma[*ultima_posicao];
    int soma = 0;

    printf("digite(1) --> para inserir os numeros\n digite(2) --> para apresentar a resposta ");
    scanf("%d",&opcao);


    if(opcao = 1){
        printf("Digite um numero para que seja realizada a soma: \n");
        scanf(lista_soma[*ultima_posicao]);
    }

    else{
        for(int i = 0; i <*ultima_posicao ; i++){
            soma = lista_soma[i + 1];

        }
        printf("A soma é igual a: %i", &lista_soma);
    }

    return 0;
}