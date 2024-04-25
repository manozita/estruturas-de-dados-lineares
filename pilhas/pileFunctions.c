#include "pile.h"

int main () {

}

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
    Pilha aux = criarPilha();
    
}