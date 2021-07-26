/* Exemplos com erros inseridos propositalmente */

#include <iostream>

using namespace std;

int main( ){

    int a; // Declaração da variável “a” do tipo inteiro

    b = 5;  // Erro! “b” não foi declarado

    cout << a << endl; // Valor de a: lixo da memória

    a = "oi";  // Erro! “a” foi declarada como inteiro

    auto a = 5;

    auto s = "oi";

    auto m = main;

    return 0;
}

/* Fim do programa */
