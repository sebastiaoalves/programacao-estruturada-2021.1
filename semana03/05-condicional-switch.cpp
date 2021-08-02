#include <iostream>

using namespace std;

int main(){

    int opcao;
    cout << "Digite a opção: ";
    cin >> opcao;

    switch (opcao){
        case 0: cout << "opção 0 escolhida" << endl;
        case 1: cout << "opção 1 escolhida" << endl;
        case 2: cout << "opção 2 escolhida" << endl;
             break;
        case 3: cout << "opção 3 escolhida" << endl;
        default: cout << "opção inválida" << endl;
    }

    return 0;
}