#include <iostream>

using namespace std;

int main(){

    int x = 10;  // um inteiro
    int *ptr1 = &x; // ptr1 guarda o endereço onde está um inteiro
    int **ptr2 = &ptr1; // ptr2 aponta para onde está o endereço de um número inteiro
    int ***ptr3 = &ptr2; // ptr3 aponta para onde aponta para onde aponta para onde está o inteiro

    int matrix[3][3];
    int **ptr=(int **)matrix;
    int *linha = ptr[0];

    return 0;
}
