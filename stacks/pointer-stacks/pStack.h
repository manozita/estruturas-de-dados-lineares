// Esta é uma pilha de caracteres, com no máximo 100 caracteres. 
#include "boolean.h"
 
#define Max 101 
#define ghost 63 
#define sinal 0 
typedef struct{ 
 int topo;  //o campo topo aponta para o último item colocado na pilha 
 unsigned char vetor[Max];  //o primeiro a entrar na pilha é colocado na posição 1 
            //o tamanho máximo da pilha é guardado na posição 0. 
} Pilha; 
// interface 
void criarPilha(Pilha * ); //cria a pilha vazia 
bool pilhaVazia(Pilha *);  //devolve TRUE se a pilha é vazia, FALSE, caso contrário 
unsigned char acessarPilha(Pilha *);  //devolve o item que está no topo da pilha 
void pushPilha(Pilha *,unsigned char); //coloca um item na pilha 
void popPilha(Pilha *);       //retira um item da pilha 
void esvaziarPilha(Pilha *);     //esvazia a pilha 
void mostrarPilha(Pilha *);    //mostra a pilha
int obterProfundidade(Pilha *);    //devolve o tamanho da pilha
void copiarPilha(Pilha *, Pilha *);      //copia a pilha A em uma pilha B
void inverterPilha(Pilha *);       //inverte a pilha

