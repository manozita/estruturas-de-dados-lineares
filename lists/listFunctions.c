#include <stdio.h>
#include <stdlib.h>
#define Max 101

#define Fantasma 0

typedef struct {
	int tam;
	char vetor[Max];
} Lista;

Lista criarLista() {
	Lista L;
	L.tam = 0;
	return L;
}

Lista listaAppend(Lista L, char ch) { //acrescenta um novo item no fim da lista
	int novoTamanho;
	novoTamanho = L.tam + 1;
	L.vetor[novoTamanho] = ch;
	L.tam = novoTamanho;
	return L;
}

Lista listaClear(Lista L) {
	L.tam = 0;
	return L;
}

Lista listaCopy(Lista L) {
	Lista B; int tamanho, i;
	tamanho = L.tam;
	B.tam = tamanho;
	for (i = 1; i <= tamanho; i++) {
		B.vetor[i] = L.vetor[i];
	}
	return B;
}

int listaCount(Lista L) {
	int tamanho = L.tam;
	return tamanho;
}

Lista listaExtend(Lista L, Lista A) {
	int tamanhoA, i;
	tamanhoA = A.tam;
	for (i = 1; i <= tamanhoA; i++) {
		listaAppend(L, A.vetor[i]);
	}
	return L;
}

int listaIndex(Lista L, int el) {
	int i, tamanho, indice;
	tamanho = L.tam;
	i = 1;
	while (el != L.vetor[i] && i <= tamanho) {
		i += 1;
	}
	if (el != L.vetor[i]) {
		indice = Fantasma;
	} else {
		indice = i;
	}
	return indice;
}

Lista listaInsert(Lista L, int el, int pos) {
	int i, tamanho;
	tamanho = L.tam;
	for (i = tamanho; i >= pos; i--) {
		L.vetor[i+1] = L.vetor[i];
	}
	L.vetor[pos] = el;
	L.tam = tamanho+1;
	return L;
}

Lista listaPop(Lista L, int pos) {
	int i, tamanho;
	tamanho = L.tam-1;
	for (i = pos; i <= tamanho; i++) {
		L.vetor[i] = L.vetor[i+1]; 
	}
	L.tam = tamanho-1;
	return L;
}
















