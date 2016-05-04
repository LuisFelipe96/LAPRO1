#include <stdio.h>

int main () {
	FILE *arquivo;
	int c;
	int cont;
	arquivo = fopen("lerbyte","r");
	for(cont=0;cont<10;cont++){		
		c = getc(arquivo);
		printf("%i %c\n",c,c);
	}
	fclose(arquivo); 
	return 0;
}
