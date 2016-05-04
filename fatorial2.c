#include <stdio.h>

double fatorial(double);

double fatorial(double n){
	double f=1L;
	double c;
	for (c=1L;c<=n;c++){
		f=f*c;	
	}	
	return f;
}

int main(){
	double n;
	double f;
	printf("digiteum numero:");
	scanf("%lf",&n);
	f= fatorial(n);
	printf("N=%.0lf, F=%.0lf\n",n,f);
	return 0;
}
