#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // 5.3 - 4.3
    double primeiro_numero, segundo_numero;
    char operacao;

    // ler a expressão
    cout << "Digite uma expressão do tipo NUM OP NUM " << endl;
    cin >> primeiro_numero >> operacao >> segundo_numero;

    // verificar qual a operação
    switch(operacao){
        case '+':
            cout << "Resultado: " << primeiro_numero + segundo_numero << endl;
            break;
        case '-':
            cout << "Resultado: " << primeiro_numero - segundo_numero << endl;
            break;
        case '*':
            cout << "Resultado: " << primeiro_numero * segundo_numero << endl;
            break;
        case '/':
            cout << "Resultado: " << primeiro_numero / segundo_numero << endl;
            break;
        case '^':
            cout << "Resultado: " << pow(primeiro_numero, segundo_numero) << endl;
            break;
        default:
            cerr << "Operador não encontrado." << endl;
    }

    return 0;
}