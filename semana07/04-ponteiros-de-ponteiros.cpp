#include <iostream>
#include <new>

using namespace std;

int main(){
    double ** matriz;
    const int num_linhas = 10, num_colunas=5;
    matriz = new double * [ num_linhas ];
    for (int i=0;i<num_linhas;i++)
        matriz[i] = new double [num_colunas]; /* … */
    for (int i=0;i<num_linhas;i++)
        delete [] matriz[i];
    delete [] matriz;
    return 0;
}