#include <iostream>
#include <new>

using namespace std;

struct Aluno{
    string nome;
    int faltas;
    double notas[4];
};

int main(){
    Aluno *novo_aluno = new Aluno;
    Aluno *classe = new Aluno[30];
    return 0;
}
