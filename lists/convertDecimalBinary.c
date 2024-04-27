#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Max 101

typedef struct {
	int tam;
	char vetor[Max];
} List;

void createList (List *L);
int converterN(int Q, List *B);

int main (void) {
	
	int decimalNumber;
	List binary;
	createList(&binary);
	
	converterN(decimalNumber, &binary);
	return 0;
}

void createList (List *L) {
	L -> tam = 0;
}

int converterN(int Q, List *B) {
	int qtdBits; float lgN;
	
	lgN = (log10(Q)/log10(2));
	qtdBits = ceil(lgN);
	
	while (Q >= 2) {
		B -> tam += 1;
		B -> vetor[B -> tam] = Q%2;
		Q = Q/2;
	}
	B -> tam += 1;
	B -> vetor[B -> tam] = Q;
	
	return qtdBits;
}

