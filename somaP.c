#include <stdio.h>


/*Luís Felipe Oliveira de Castro*/
float somar(float,float,float*);
float somar(float n1, float n2,float *r){
	*r = n1+n2;

}


int main (){
	float n1;
	float n2;
	float n3;
	float r;
	printf("digite um numero: ");
	scanf("%f",&n1);
	printf("digite um numero: ");
	scanf("%f",&n2);
	somar(n1,n2,&r);
	printf("%.2f\n",r);	

	return 1;
}

