#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TFila *f1, *f2;
	
	f1 = criar();
	f2 = criar();
	
	enfileirar(f1, 2);
	enfileirar(f1, 4);
	enfileirar(f1, 6);
	enfileirar(f1, 8);
	
	int i;
	int j = tamanho(f1);
	int l = 2;
	
	printf("1: ");
	exibe(f1);
	printf("\n");
	
	for(i = 0; i < j; i++){
		
		printf("%d: ", l);
		l = l + 1;
		int k = desenfileirar(f1);
		enfileirar(f2, k);
		exibe(f1);
		printf("\n");
		
	}
	
	for(i = 0; i < j; i++){
		
		int k = desenfileirar(f2);
		enfileirar(f1, k);
		
	}
	
	printf("--------\n");
	printf("1: ");
	l = 2;
	exibe(f1);
	printf("\n");
	
	for(i = 0; i < j-1; i++){
		
		printf("%d: ", l);
		l = l+1;
		int k = desenfileirar(f1);
		enfileirar(f2, k);
		exibe(f1);
		printf("\n");
		
	}
	
	printf("--------\n");
	
	
	return 0;
}
