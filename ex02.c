#include<stdio.h>
#include<stdlib.h>

int main(){
    int *vet_1, *vet_2, *vet_3, *vet_4, *vet_5;

    vet_1 = (int *) malloc(5 * sizeof(int));
    vet_2 = (int *) malloc(5 * sizeof(int));
    vet_3 = (int *) malloc(5 * sizeof(int));
    vet_4 = (int *) malloc(5 * sizeof(int));
    vet_5 = (int *) malloc(5 * sizeof(int));
    
    if (vet_1 && vet_2 && vet_3 && vet_4 && vet_5){
        for (int i=0; i < 5; i++){
            *(vet_1 +i) = 1*(i+1);
            *(vet_2 +i) = 2*(i+1);
            *(vet_3 +i) = 3*(i+1);
            *(vet_4 +i) = 4*(i+1);
            *(vet_5 +i) = 5*(i+1);
        }
        printf("VETOR 01: ");
        for (int i=0; i < 5; i++){
            printf("%d ", *(vet_1 +i));
        }
        printf("\n");
        printf("VETOR 02: ");
        for (int i=0; i < 5; i++){
            printf("%d ", *(vet_2 +i));
        }
        printf("\n");
        printf("VETOR 03: ");
        for (int i=0; i < 5; i++){
            printf("%d ", *(vet_3 +i));
        }
        printf("\n");
        printf("VETOR 04: ");
        for (int i=0; i < 5; i++){
            printf("%d ", *(vet_4 +i));
        }
        printf("\n");
        printf("VETOR 05: ");
        for (int i=0; i < 5; i++){
            printf("%d ", *(vet_5 +i));
        }
        printf("\n");
    }
    return 0;
}