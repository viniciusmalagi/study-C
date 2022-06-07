#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int qtd;
    char desc[50];
    float valorUN;
}PRODUTO;

int main(){
    PRODUTO estatico, *dinamica;

    fflush(stdin);
    printf("Digite a quantidade: ");
    scanf("%d", &estatico.qtd);

    printf("Digite a descricao do produto: ");
    fflush(stdin);
    scanf(" %[^\n]", &estatico.desc);

    printf("Digite o valor do produto: ");
    fflush(stdin);
    scanf("%f", &estatico.valorUN);

    printf("STRUCT ESTATICA: (QUANTIDADE): %d\n", estatico.qtd);
    printf("STRUCT ESTATICA: (DESC): %s\n", estatico.desc);
    printf("STRUCT ESTATICA: (VALOR): %.2f\n", estatico.valorUN);

    dinamica = (struct PRODUTO *) malloc(sizeof(PRODUTO));
    if (dinamica){
        memcpy(dinamica, &estatico, sizeof(PRODUTO));
        printf("STRUCT DINAMICA: (QUANTIDADE): %d\n", dinamica->qtd);
        printf("STRUCT DINAMICA: (DESC): %s\n", dinamica->desc);
        printf("STRUCT DINAMICA: (VALOR): %.2f\n", dinamica->valorUN);
    }
    return 0;
}