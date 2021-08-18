#include <iostream>

using namespace std;

int main(){
    int opcao;
    do{
        cout << "Digite a opção desejada entre 0 e 9: ";
        cin >> opcao;
    } while (opcao<0 || opcao>9);
    cout << "A opção escolhida foi: " << opcao << endl;
    return 0;
}