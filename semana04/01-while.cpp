#include <iostream>

using namespace std;

/*
100 --> 33 --> 11 --> 3 --> 1
log (3) 100 = 4

1 5 6 10 25 35 46 87 100
35 46 87 100
35 46

1 5 6 10 25 35 46 87 100
35 46 87 100
100

log (2) tamanho */

int main(){
    int n=100, base=3, logaritmo=0;
    int n_orig = n;
    while (n>1) {
        logaritmo++;
        n/=base; // n = n / base
    }
    cout << "Logaritmo de " << n_orig << " na base " << base << " é " << logaritmo << endl;
    return 0;
}