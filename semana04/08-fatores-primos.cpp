#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Digite um número para decompor em fatores primos: " << endl;
    cin >> numero;

    cout << numero << " = 1";

    int divisor = 2;

    while (numero != 1){
        // testa se é divisível
        if(numero % divisor == 0){
            numero /= divisor;
            cout << " * " << divisor ;
        }else
            divisor++;
    }
    
    cout << endl;

    return 0;
}