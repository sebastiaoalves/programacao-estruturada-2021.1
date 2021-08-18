#include <iostream>

using namespace std;

int main(){
    int x = 10;
    //string nomes_alunos[19];
    double notas[4] = {0.0, 0.0, 0.0, 0.0};

    notas[0] = 9.5;
    cin >> notas[1];
    cout << notas[2];
    cout << notas [5] << endl; // CUIDADO, não checa o limite

    for(int i=0; i<sizeof(notas)/sizeof(double); i++)
        cin >> notas[i];

    string nomes_planetas[] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", 
        "Saturno", "Urano", "Netuno"};

    for(int i=0;i<8;i++)
        cout << nomes_planetas[i] << endl;

    
    return 0;
}