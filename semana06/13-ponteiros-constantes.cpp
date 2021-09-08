#include <iostream>

using namespace std;

int main(){
    
    int x;
    int *pt1 = &x; // o endereço armazenado em pt1 e o dado apontado por ele podem ser modificados.
    const int *pt2 = &x; // O endereço armazenado em pt2 pode ser alterado, mas o valor para o qual ele aponta é constante
    int * const p3 = &x; // O endereço armazenado em pt3 é constante, mas o dado apontado por ele não
    const int * const p4 = &x; // Nem o endereço nem o valor podem ser modificados
    
    return 0;
}
