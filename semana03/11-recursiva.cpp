#include <iostream>

using namespace std;

// 3! = 3.2! = 3.2.1! = 3.2.1

// fat(x) = x * fat(x-1)

int fatorial (int n){
    cout << "Fazendo a chamada de fatorial(" << n << ")" << endl;
    if(n<=1)
        return 1;
    return n * fatorial (n-1);
}

// Série de fibonacci
// 1 1 2 3 5 8 13 21 34 55

// fib(n) = fib(n-1) + fib(n-2)
// Caso base: n=1 ==> 1  n==2 ==> 1

int num_chamadas=0;

int fibonacci (int n){
    //cout << "Chamando fibonacci ("  << n << ")"  << endl;
    num_chamadas++;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    // cout << fatorial (10) << endl;

    cout << fibonacci (100) << endl;

    cout << "Número de chamadas " << num_chamadas << endl;
    return 0;
}