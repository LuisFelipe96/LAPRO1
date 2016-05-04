/*
	INTEIRO cont	
	PARA cont<-1 ATÉ 10 FAÇA
		ESCREVA (cont)

*/

#include <stdio.h>

int main(void){
	int i;
	printf("INICIO!\n");
	for( i = 1 ; i <= 10 ; i++){
		if(i%2 == 1){
			continue;
		}
		printf("%d\n",i);
	}
	printf("FIM!\n");
	return 0;

}
