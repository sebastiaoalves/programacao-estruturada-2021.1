#include <iostream>
#include <list>
#include <deque>

using namespace std;

struct aluno{
    string nome;
    int faltas;
    double notas[4];
};

int main(){
    list<int> lista_inteiros;
    list<string> lista_string;
    list<aluno> lista_alunos;

    auto inicio_lista_string = lista_string.begin();

    deque<string> fila_clientes;
    string nome1="Serbastião";
    fila_clientes.push_back(nome1);
    lista_string.insert(inicio_lista_string, nome1);
    lista_string.push_front("Alves");
    inicio_lista_string++;
    lista_string.insert(inicio_lista_string, "Emidio");
    lista_string.sort();

    for(auto nome:lista_string)
        cout << nome << endl;

    return 0;
}