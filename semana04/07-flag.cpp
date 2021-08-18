#include <iostream>
#include <cmath>

using namespace std;

// Flag ou sentinela

//11 - 2-5
//100 - 10

bool ehPrimo(int n){
    bool primo = true;
    for (int divisor = 2, limite = sqrt(n); divisor < limite; divisor++){
        if(n % divisor == 0){
            primo = false;
            break;
        }
    }
    return primo;
}

/*
Exemplo do for/else em python
for divisor in range(2,sqrt(n)):
    if n%divisor == 0:
        return False
        break
else:
    return True
*/

int main(){
    int n;
    cin >> n;
    if(ehPrimo(n))
        cout << n << " é um número primo. " << endl;
    else
        cout << n << " não é um número primo. " << endl;

}
