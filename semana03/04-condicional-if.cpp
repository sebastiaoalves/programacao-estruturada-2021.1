#include <iostream>

using namespace std;

int main(){

    int numero;
    cin >> numero;

    if ( numero % 2 == 0)
        cout << "O número é par!" << endl;
    int dia = 0, horas = 18;
    horas += 10;

    if ( horas >= 24 ) {
        dia+= horas/24;
        horas %= 24;
    } else
        dia = 0;

        cout << dia << " " << horas << endl;

    double media;
    cin >> media;

    if (media>=7)
        cout << "Aprovado";
    else {
        double nota4;
        cout << "Digite a nota da 4ª avaliação";
        cin >> nota4;
        if((media+nota4)/2 >=6)
            cout << "Aprovado na 4ª avaliação" << endl;
        else
            cout << "Reprovado na 4ª avaliação" << endl;
    }

    int idade;
    cin >> idade;
    if(idade < 16)
        cout << "Não pode votar"  << endl;
    else if(idade>=18 && idade<=60)
        cout << "Voto obrigatório" << endl;
    else
        cout << "Voto facultativo" << endl;

    return 0;
}