/*
Autor: Luís Felipe OLiveira de Castro
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    int contl;
    int contc;
    printf("digite um numero: ");
    scanf("%d",&num);
    for( contl=1; num>=contl ; contl++) {
        for(contc=1 ; num>=contc ; contc++) {
            if((contc == 1 || contc==num)&&(contl==1 || contl==num)) {
                printf("+ ");
            } else if(contl==1 || contl==num) {
                printf("- ");
            } else if((contl>1 && contl<num)&&(contc == 1 || contc==num)) {
                printf("| ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
