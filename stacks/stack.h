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
Pilha criarPilha();    //cria a pilha vazia 
bool PilhaVazia(Pilha);   //devolve TRUE se a pilha é vazia, FALSE, caso contrário 
unsigned char acessarPilha(Pilha);  //devolve o item que está no topo da pilha 
Pilha pushPilha(Pilha,unsigned char); //coloca um item na pilha 
Pilha popPilha(Pilha);       //retira um item da pilha 
Pilha esvaziarPilha(Pilha);     //esvazia a pilha 
void mostrarPilha (Pilha);      //mostra a pilha
unsigned int profundidadePilha (Pilha);   //devolve a profundidade da pilha
Pilha inverterPilha (Pilha);    //devolve a pilha invertida
