#include <iostream>

using namespace std;

// struct AlunoAcademia
struct aluno_academia{
    string nome;
    int altura;
    double peso;
    int idade;
};

int main(){
    aluno_academia aluno1, aluna1 = {"Ivone", 154, 66.8, 42}, aluno2, aluna2;
    aluno1.nome = "Sebastião";
    aluno1.altura = 174;
    aluno1.peso = 75.6;
    aluno1.idade = 41;

    aluno2.nome = aluno1.nome;
    aluno2.altura = aluno1.altura;
    aluno2.peso = aluno1.peso;
    aluno2.idade = aluno1.idade;

    aluna2 = aluna1;

//  int idades [10];
//  array<int, 10> idades;

    aluno_academia alunos_matutino[50];
    for(int i=0; i<50; i++){
        // alunos_matutino[i] = {"", 0, 0.0, 0};
        cin >> alunos_matutino[i].nome;
        cin >> alunos_matutino[i].altura;
        cin >> alunos_matutino[i].peso;
        cin >> alunos_matutino[i].idade;
    }

    aluno_academia instrutores[3] = {
        {"João", 181, 92, 25},
        {"Maria", 167, 57, 21},
        {"Isabel", 175, 60, 24}
    };

    return 0;
}