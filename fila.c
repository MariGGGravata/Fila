#include "fila.h"

const int tam = 100;

struct Fila{

	int vetor[100];
	int ini, fim, qtd;
};

TFila* criar(){

	TFila* fila = (TFila*)malloc(sizeof(TFila));
	fila->ini = -1;
	fila->fim = -1;
	fila->qtd = 0;
	
	return fila;
}

void enfileirar(TFila * f, int x){

	if (!((f->fim+1) % tam == f->ini)){
		if(f->ini == -1) f->ini = 0;
		f->fim = (f->fim+1) % tam;
		f->vetor[f->fim] = x;
		f->qtd = f->qtd + 1;
	}
}

int desenfileirar(TFila * f){
	
	int d = -1;
	
	if(f->ini > -1){
		d = f->vetor[f->ini];
		if (f->ini == f->fim) f->ini = f->fim = -1;
		else f->ini = (f->ini+1) % tam;
		f->qtd = f->qtd -1;
		
	}
	
	return d;
}

int tamanho(TFila *f){
	
	return f->qtd;
}

void exibe(TFila * f){
	
	int i, ind;
	
	ind = f->ini;
	
	for(i = 0; i < f->qtd; i++){
		printf("%d ", f->vetor[ind]);
		ind = (ind + 1) % tam;
	}
}


