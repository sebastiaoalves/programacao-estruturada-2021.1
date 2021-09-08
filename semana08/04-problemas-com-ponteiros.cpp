#include <iostream>
#include <new>

using namespace std;

int *ptr4;
void vaiDarErrado(){
    int tmp=0;  // tmp é uma variável da função
    ptr4=&tmp; /* … */
}

int main(){

    // Falta de memória

    const int MUITO_ESPACO = 10000000000;
    // Tratando a exceção
    int *vetor;
    try{
        vetor = new int [MUITO_ESPACO];
    }catch (bad_alloc &ba){
        // o que fazer se falta memória
    }

    // Usando a opção nothrow
    int *vetor;
    vetor = new (nothrow) int [MUITO_ESPACO];
    if (vetor == nullptr )
    // o ponteiro é nulo se não há memória suficiente
        ;
    
    // Memory leaks
    char opcao;
    int *vetor;
    do{
        vetor = new int [100];
        fill (vetor, vetor+100, -1); /*... */
    } while (opcao!='s');
    delete []vetor;

    // Dangling pointers

    int * ptr;
    *ptr = 10; //Faltou alocar: ptr = new int;

    int *ptr2 = new (nothrow) int[100];
    *ptr2 = -1; //Se a alocação falhar ptr2 é nulo

    int *ptr3 = new (nothrow) int [100]; /* … */
    delete []ptr3;
    ptr3[10] = 100; // ptr3 já foi desalocado
    
    *ptr4 = 100; // ptr4 aponta pra tmp, que não existe mais
    
    return 0;
}

