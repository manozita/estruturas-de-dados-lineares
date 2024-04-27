#include "pStack.h"
#include <stdio.h>

int main() {
    Pilha A;
    criarPilha(&A);
    if(pilhaVazia(&A)) printf("A pilha esta vazia.\n");
    pushPilha(&A, 'm'); pushPilha(&A, 'a'); pushPilha(&A, 'n'); pushPilha(&A, 'o'); pushPilha(&A, 'e'); pushPilha(&A, 'l'); pushPilha(&A, 'a');
    mostrarPilha(&A);
    inverterPilha(&A);
    mostrarPilha(&A);
    if(pilhaVazia(&A)) printf("A pilha esta vazia.\n");
    return 0;
}

void criarPilha(Pilha *A) {
    A->topo = sinal;
    A->vetor[0] = Max-1;
}

bool pilhaVazia(Pilha *A) {
    bool vazia;
    if (A->topo == sinal) vazia=TRUE;
    else vazia=FALSE;
    return vazia;
}

void pushPilha(Pilha *A, unsigned char ch) {
    if (A->topo != A->vetor[0]) {
        A->topo = A->topo+1;
        A->vetor[A->topo] = ch;
    }
}

void popPilha(Pilha *A) {
    if (A->topo != sinal) A->topo = A->topo-1;
}

void esvaziarPilha(Pilha *A) {
    A->topo = sinal;
}

unsigned char acessarPilha (Pilha *A) {
    char el;
    if (A->topo != A->vetor[0]) el = A->vetor[A->topo];
    else el = ghost;
    return el;
}

void mostrarPilha(Pilha *A) {
    Pilha aux;
    aux.topo = sinal;
    aux.vetor[0] = Max-1;

    while (A->topo != sinal) {
        aux.topo++;
        aux.vetor[aux.topo]=A->vetor[A->topo];
        printf("%c\n\n", A->vetor[A->topo]);
        A->topo = A->topo-1;
    }
    while (aux.topo != sinal) {
        A->topo = A->topo+1;
        A->vetor[A->topo] = aux.vetor[aux.topo];
        aux.topo--;
    }
    printf("\n");
}

int obterProfundidade(Pilha *A) {
    int prof;
    prof = A->topo;
    return prof;
}

void copiarPilha(Pilha *A, Pilha *B) {
    Pilha aux;
    criarPilha(&aux);

    while(!(pilhaVazia(A))) {
        pushPilha(&aux, acessarPilha(A));
        popPilha(A);
    }
    while(!(pilhaVazia(&aux))) {
        pushPilha(A, acessarPilha(&aux));
        pushPilha(B, acessarPilha(&aux));
        popPilha(&aux);
    }
}

void inverterPilha(Pilha *A) {

    // PILHA PONTEIRO USUARIO
    Pilha P;
    criarPilha(&P);
    
    copiarPilha(A, &P);
    esvaziarPilha(A);

    while(!pilhaVazia(&P)) {
        pushPilha(A, acessarPilha(&P));
        popPilha(&P);
    }

    /*//PILHA PONTEIRO
    Pilha aux;  Pilha aux2;
    aux.topo = sinal;   aux2.topo = sinal;
    aux.vetor[0] = Max-1;   aux2.vetor[0] = Max-1;

    while (A->topo != sinal) {
        aux.topo = aux.topo + 1;
        aux.vetor[aux.topo] = A->vetor[A->topo];
        A->topo = A->topo - 1;
    }
    while (aux.topo != sinal) {
        aux2.topo = aux2.topo+1;
        aux2.vetor[aux2.topo] = aux.vetor[aux.topo];
        aux.topo = aux.topo-1;
    }
    while (aux2.topo != sinal) {
        A->topo = A->topo+1;
        A->vetor[A->topo] = aux2.vetor[aux2.topo];
        aux2.topo = aux2.topo-1;
    }*/
}