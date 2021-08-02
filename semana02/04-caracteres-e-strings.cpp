#include <iostream>
#include <string>

using namespace std;

int main()
{
    // charset
    char letra = 'a'; // O que é armazenado é o código do caractere

    cin >> letra;

    cout << letra << ' ' << letra+3 << ' ' << char (letra-3) << ' '  << endl;

    // Exemplos de caracteres visíveis, de controle e terminação em nulo
    string nome="Sebastião\n", sobrenome="\t    Al\0ves"; 

    cout << nome << ' ' << sobrenome << endl;

    string nome_completo;

    cin >> nome_completo;

    cout << "Nome completo: " << nome_completo << endl;

    //cin.get();
    getline(cin, nome_completo);

    cout << "Nome completo: " << nome_completo << endl;

    return 0;
}
