#include <stdio.h>

int main () {
	FILE *arquivo;
	int num;
	arquivo = fopen("dados.txt","r");
	while(!feof(arquivo)){
		if(fscanf(arquivo,"%i",&num)==1)
			printf("O número lido foi:%i\n", num);
	}
	fclose(arquivo);  
	return 0;
}
