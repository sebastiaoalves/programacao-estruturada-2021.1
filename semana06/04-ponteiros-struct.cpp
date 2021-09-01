#include <iostream>

using namespace std;

int main(){

    struct Aluno{
        string nome;
        int faltas;
        double notas[4];
    };

    Aluno aluno1 = {"", 10, {8,5,4.5}};

    Aluno *ptr_aluno = &aluno1;
    (*ptr_aluno).nome = "João";

    cout << (*ptr_aluno).faltas << endl;

    cin >> ptr_aluno -> faltas;
    // (*ptr_aluno).notas[0] = 7.3
    ptr_aluno -> notas[0] = 7.3;


    return 0;
}
