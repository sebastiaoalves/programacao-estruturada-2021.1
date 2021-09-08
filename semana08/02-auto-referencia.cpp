#include <iostream>
#include <new>

using namespace std;

struct Equipe{
    string nome;
    int pontos;
};

struct FaseCampeonato{
    string nome;
    Equipe *classificados;
    FaseCampeonato *proximaFase;
};

int main(){
    FaseCampeonato *oitavasDeFinal = new FaseCampeonato;
    FaseCampeonato *quartasDeFinal = new FaseCampeonato;
    oitavasDeFinal -> proximaFase = quartasDeFinal;

    return 0;
}
