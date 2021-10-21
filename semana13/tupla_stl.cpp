#include <iostream>
#include <tuple>

using namespace std;

int main(){
    pair<string, int> par;
    par.first = "Sebastião";
    par.second = 100;

    tuple<string, int, double> aluno ("Sebastião", 10, 7.5);
    cout << get<0>(aluno) << " " << get<2>(aluno) <<  endl;

    string nome;
    int faltas;
    double media;

    tie(nome, faltas, media) = aluno;

    cout << nome << endl;

    auto outra_tupla = make_tuple(10, " olá ", 0.5, array<double, 2>{0.2, 9.5});

    return 0;
}