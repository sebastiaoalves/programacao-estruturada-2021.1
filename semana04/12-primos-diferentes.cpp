#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >> numero;

    int divisor=2;
    bool divisor_repetido = false;
    bool possui_repetido = false;

    while(numero!=1){
        if(numero % divisor == 0){
            numero /= divisor;
            if ( ! divisor_repetido)
                divisor_repetido = true;
            else{
                possui_repetido = true;
                break;
            }
        }else{
            divisor++;
            divisor_repetido = false;
        }
    }
    if(possui_repetido)
        cout << "O número possui divisores repetidos (ex: " << divisor << ") " << endl;
    else
        cout << "O número não possui divisores repetidos." << endl;
    return 0;
}