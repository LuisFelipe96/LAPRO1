#include <stdio.h>
#include "s.h"

/*Luís Felipe Oliveira de Castro*/



int main (){
	float n1;
	float n2;
	float s;
	printf("digite um numero: ");
	scanf("%f",&n1);
	printf("digite um numero: ");
	scanf("%f",&n2);
	s=somar(n1,n2);
	printf("%.2f\n",s);	

	return 1;
}

