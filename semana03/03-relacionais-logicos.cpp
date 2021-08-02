#include <iostream>

using namespace std;

int main(){

    int numero;
    cin >> numero;
    string resultado = numero%2==0 ? "par" : "ímpar";
    cout << "O número lido é " << resultado  << endl;

    int x=10, y=20;

    bool cond1 = (x>=5) == (y!=2);
    bool cond2 = x>5 || y <10;
    bool cond3 = x==0 && y ==10;

    cout << cond1 << " " << cond2 << " " << cond3 << endl;

    cout << sizeof(double) << " " << sizeof(cond1) << " " << sizeof(numero) << endl;

    return 0;
}