#include <iostream>

using namespace std;

int main(){

    int *prt_int; // aponta o endereço para onde um inteiro está alocado
    char *str; // str guarda o endereço de um caractere
    void *generico; // genérico guarda um endereço cujo tipo do dado apontado nao interessa

    int x = 10, *ptr1 = &x;
    double y = 4.1, *ptr2 = &y;
    cout << "Endereço 1: " << ptr1 << " \nEndereço 2: " << ptr2;
    void *ptr3 = &x;
    cout << "Endereço 3: " << ptr3 << endl;
    ptr3=ptr2;
    cout << "Endereço 3: " << ptr3 << endl;
    cout << "Endereço de ptr3: " << &ptr3 << endl;

    return 0;
}
