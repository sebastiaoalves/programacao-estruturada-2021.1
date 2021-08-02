#include <iostream>

using namespace std;

int fatorial (int);  // alusão criada, a função vem depois

int combinatoria (int n, int p){
    return fatorial (n) / (fatorial(p) * fatorial (n-p));
}

int exccutaCominatorio(int n, int p){
    if(n>=p)
        return combinatoria (n,p);
    return -1;
}

// Calcular fatorial
int fatorial (int n) {
    int valor_fat=1;
    if (n > 1)
        valor_fat=n*fatorial(n-1);
    return valor_fat;
}

int main(){
    
    return 0;
}