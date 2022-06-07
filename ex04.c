#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char sgEstado[2];
    char cidade[20];
    char bairo[15];
    char rua[30];
    int numero;
}END;

typedef struct{
    END * pessoal;
    END * comercial;
}CADASTRO;

int main(void){

    CADASTRO *cad = malloc(sizeof(CADASTRO));
    if ( ( cad != NULL ) && ( cad->pessoal = malloc( sizeof( END ))) && (cad->comercial = malloc( sizeof( END ))) ){
    printf("** DIGITE SEU ENDERECO RESIDENCIAL ***\n");
    fflush(stdin);
    printf("Sigla do estado: ");
    scanf(" %[^\n]", &cad->pessoal->sgEstado);

    printf("Estado: %s\n", cad->pessoal->sgEstado);

    fflush(stdin);
    printf("Cidade:");
    scanf(" %[^\n]",&cad->pessoal->cidade);

    fflush(stdin);
    printf("Bairro:");
    scanf(" %[^\n]",&cad->pessoal->bairo);

    fflush(stdin);
    printf("Rua:");
    scanf(" %[^\n]",&cad->pessoal->rua);

    fflush(stdin);
    printf("Numero:");
    scanf("%d",&cad->pessoal->numero);

    printf("*** ENDERECO RESIDENCIAL ***\n");
    printf("Estado: %s\n",cad->pessoal->sgEstado);
    printf("Cidade: %s\n",cad->pessoal->cidade);
    printf("Bairro: %s\n",cad->pessoal->bairo);
    printf("Rua: %s\n",cad->pessoal->rua);
    printf("Numero: %d\n",cad->pessoal->numero);

    printf("** DIGITE SEU ENDERECO COMERCIAL ***\n");
    fflush(stdin);
    printf("Sigla do estado:");
    scanf(" %[^\n]",&cad->comercial->sgEstado);

    fflush(stdin);
    printf("Cidade:");
    scanf(" %[^\n]",&cad->comercial->cidade);

    fflush(stdin);
    printf("Bairro:");
    scanf(" %[^\n]",&cad->comercial->bairo);

    fflush(stdin);
    printf("Rua:");
    scanf(" %[^\n]",&cad->comercial->rua);

    fflush(stdin);
    printf("Numero:");
    scanf("%d",&cad->comercial->numero);

    printf("*** ENDERECO COMERCIAL ***\n");
    printf("Estado: %s\n",cad->comercial->sgEstado);
    printf("Cidade: %s\n",cad->comercial->cidade);
    printf("Bairro: %s\n",cad->comercial->bairo);
    printf("Rua: %s\n",cad->comercial->rua);
    printf("Numero: %d\n",cad->comercial->numero);
    }
    return 0;
}