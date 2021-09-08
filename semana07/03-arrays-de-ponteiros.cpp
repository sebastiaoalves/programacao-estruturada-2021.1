#include <iostream>
#include <new>

using namespace std;

int main(){
    int *num;
    double * matriz [20];
    matriz [0] = new double [10]; // primeira linha tem 10 elementos
    matriz [1] = new double [2]; // segunda linha tem 2 elementos

    delete [] matriz[0];
    delete [] matriz[1];

    return 0;
}