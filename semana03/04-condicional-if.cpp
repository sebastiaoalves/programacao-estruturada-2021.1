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


    return 0;
}