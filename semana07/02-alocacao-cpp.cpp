#include <iostream>
#include <new>

using namespace std;

int main(){
    int *num;
    double *vetor;
    num = new int;            // Aloca um inteiro
    vetor = new double [10];    // Aloca um vetor de 10 double
    char *ptr = new char ('a');
    const int num_alunos=10;
    double * notas = new double [num_alunos] ( );  // notas tem todos os seus valores zerados
  
    delete num;
    delete [] vetor;
    delete ptr;
    delete [] notas;
    return 0;
}