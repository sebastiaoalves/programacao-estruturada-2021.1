#include <iostream>

using namespace std;

int main(){
    double vetor[5] = {1,2,3,4,5}, *ptr=vetor;  //ponteiro recebe o endereço do 1º 
    for(double d:vetor)
        cout << d << " ";
    cout << endl;

    ptr[0]=1.5;     // Usando o ponteiro como um vetor
    for(double d:vetor)
        cout << d << " ";
    cout << endl;

    cout << *vetor << endl;   // Usando o vetor como um ponteiro

    int matrix[5][2], **ptr_matrix = matrix;
    //matrix[0] __ __  matrix[1] __ __ mtarix[2] __ __ matrix[3] __ __ 

    return 0;
}
