#include "stack.h"

// exercize 1
Pilha criarPilha () {
    Pilha P;
    P.topo = sinal;
    P.vetor[0] = Max-1;
    return P;
}

bool PilhaVazia (Pilha P) {
    bool res;
    if (P.topo == sinal) res = TRUE;
    else res = FALSE;
    return res; 
}

unsigned char acessarPilha (Pilha P) {
    unsigned char c;
    if (P.topo == sinal) c = ghost;
    else c = P.vetor[P.topo];
    return c;
}

Pilha pushPilha (Pilha P, unsigned char c) {
    if (P.topo != P.vetor[0]) {
        P.topo = P.topo+1;
        P.vetor[P.topo] = c;
    }
    return P;
}

Pilha popPilha (Pilha P) {
    if (P.topo != sinal) P.topo = P.topo-1;
    return P;
}

Pilha esvaziarPilha (Pilha P) {
    P.topo = sinal;
    return P;
}

void mostrarPilha (Pilha P) {
    int i;
    while (P.topo != sinal) {
        printf("%c\n", P.vetor[P.topo]);
        P.topo = P.topo-1;
    }
}

unsigned int profundidadePilha (Pilha P) {
    return P.topo;
}

Pilha inverterPilha (Pilha P) {

    // PILHA NAO PONTEIRO
    Pilha B;
    B.topo = sinal;
    B.vetor[0] = Max-1;

    while (P.topo != sinal) {
        B.topo = B.topo+1;
        B.vetor[B.topo] = P.vetor[P.topo];
        P.topo--;
    }
    return B;
}

Pilha copiarPilha (Pilha A) {

    /* PILHA PONTEIRO USUARIO
    Pilha B = criarPilha();
    Pilha aux = criarPilha();
    while (!(PilhaVazia(A))) {
        pushPilha(aux, A.vetor[A.topo]);
        popPilha(A);
    }
    while (!(PilhaVazia(aux))) {
        pushPilha(A, aux.vetor[aux.topo]);
        pushPilha(B, aux.vetor[aux.topo]);
        popPilha(aux);
    }
    */
    /* PILHA PONTEIRO
    Pilha B, aux;
    B.topo = sinal;
    B.vetor[0] = Max-1;
    aux.topo = sinal;
    aux.vetor[0] = Max-1;

    while (A.topo != sinal) {
        aux.topo++;
        aux.vetor[aux.topo] = A.vetor[A.topo];
        A.topo--;
    }
    while (aux.topo != sinal) {
        A.topo++; B.topo++;
        A.vetor[A.topo] = aux.vetor[aux.topo];
        B.vetor[B.topo] = aux.vetor[aux.topo];
        aux.topo--;
    }
    return B;
    */

    // PILHA NAO PONTEIRO
    Pilha B, aux;
    B.topo = sinal;
    B.vetor[0] = Max-1;
    aux.topo = sinal;
    aux.vetor[0] = Max-1;

    while (A.topo != sinal) {
        aux.topo++;
        aux.vetor[aux.topo] = A.vetor[A.topo];
        A.topo--;
    }
    while (aux.topo != sinal) {
        B.topo++;
        B.vetor[B.topo] = aux.vetor[aux.topo];
        aux.topo--;
    }
    return B;
}