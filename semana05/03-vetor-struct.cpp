#include <iostream>

using namespace std;

int main(){

    struct Aluno{
        string nome;
        int faltas;
        double notas[4];
    } turmaA[30], *turmaB;

    turmaB = new Aluno [20];
    
    cin >> turmaA[0].nome >> turmaA[0].faltas;
    turmaB[1]=turmaA[0];
    return 0;
}