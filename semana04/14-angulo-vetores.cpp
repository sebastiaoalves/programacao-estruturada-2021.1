#include <iostream>
#include <cmath>

using namespace std;

const int N=3;

double calcula_produto_escalar (double vetor1[N], double vetor2[N]){
    //A = [a1, a2, a3]
    //B = [b1, b2, b3]
    //A . B = a1xb1 + a2xb2 + a3xb3
    double produto_escalar = 0.0;
    for(int i=0;i<N;i++)
        produto_escalar += vetor1[i] * vetor2[i];
    return produto_escalar;
}

double calcula_modulo (double vetor[N]){
    // A = [a1, a2, a3]
    // ||A|| = raiz(a1^2 + a2^2 + a3^2)
    double modulo = 0.0;
    for(int i=0;i<N;i++)
        modulo += pow(vetor[i],2);
    return sqrt(modulo);
}

int main(){

    double vetor1[N] = {1, 6, -10}, vetor2 [N] = { -5,  8, -2};
    double angulo = acos( calcula_produto_escalar(vetor1, vetor2) /
        (calcula_modulo(vetor1) * calcula_modulo(vetor2)));
    cout << "O ângulo entre os vetores é de: " << angulo * 180.0 / M_PI << " graus." << endl;
    return 0;
}