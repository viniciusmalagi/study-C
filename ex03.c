#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50];
    char telefone[15];
}PESSOA;

int main(){
    PESSOA *p;

    p = malloc(sizeof(PESSOA));

    strcpy(p->nome,"Blah");
    strcpy(p->telefone, "9999-4444");

    printf("%s\n",p->nome);
    printf("%s\n",p->telefone);
    return 0;
}