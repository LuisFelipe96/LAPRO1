#include <stdio.h>

int main () {
	FILE *arquivo;
	arquivo = fopen("saida.txt","w");
	fprintf(arquivo,"Olá mundo!\nWhen you feel my heat Look into my eyes It's where my demons hide");
	fclose(arquivo);  
	return 0;
}
