#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int faltas;
    double notas[4];
};

struct  HorarioExibicao{
    string diaDaSemana;
    int horario[2]; // hora e minuto
} matine, tarde1, tarde2;
HorarioExibicao noite1, noite2;

int main(){
    matine = { "segunda", {12,45} };
    tarde1.diaDaSemana = "domingo";
    tarde1.horario[0] = 17;
    tarde1.horario[1] = 0;
    cout << tarde1.horario[0] << endl;


    matine.diaDaSemana= "segunda";
    cin >> matine.horario[0] >> matine.horario[1];
    tarde1 = matine;
    tarde1.diaDaSemana = "domingo";
    cout  << matine.diaDaSemana << " " << tarde1.diaDaSemana  << endl;

    return 0;
}