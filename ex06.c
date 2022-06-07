#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    char telefone[15];
}PESSOA;

int main(){
    PESSOA *vet;
    vet = (struct PESSOA *) malloc(5 * sizeof(PESSOA));

    if(vet){
        for(int i=1; i < 6; i++){
            printf("DIGITE O NOME DA PESSOA %d \n",i);
            scanf(" %[^\n]", &vet[i].nome);
            printf("DIGITE O TELEFONE DA PESSOA %d \n",i);
            scanf(" %[^\n]", &vet[i].telefone);

        }
        printf("**** LISTA DE PESSOAS ***\n");
        for(int i=1; i < 6; i++){
            printf("*** PESSOA %d ***\n",i);
            printf("%s\n", vet[i].nome);
            printf("%s\n", vet[i].telefone);
        }      
    }
}