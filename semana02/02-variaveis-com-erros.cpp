/* Exemplos com erros inseridos propositalmente */

#include <iostream>

using namespace std;

int x;

void teste(){
    int x = 10;
}

int main( ){

    int a; // Declaração da variável “a” do tipo inteiro

    //b = 5;  // Erro! “b” não foi declarado

    cout << a << endl; // Valor de a: lixo da memória
    if(a>0){
        int a;
        a = 10;
        int z = 20;
        x = 5;
        cout << x << endl;
    }

    //a = "oi";  // Erro! “a” foi declarada como inteiro

    auto s = "oi";

    auto m = teste;

    return 0;
}

/* Fim do programa */
