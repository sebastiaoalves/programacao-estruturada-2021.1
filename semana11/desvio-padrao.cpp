#include <iostream>
#include <cmath>

using namespace std;

void calcula_media_desvio(double notas[], int num_alunos, double &media, double &desvio_padrao){

    for(int i=0;i<num_alunos;i++)
        media += notas[i];
    media /= num_alunos;

    for(int i=0;i<num_alunos;i++)
        desvio_padrao += pow(notas[i]-media, 2.0);
    desvio_padrao = sqrt(desvio_padrao/num_alunos);

}

int main(){

    double m=0.0, desvio=0.0;
    double notas [5] = { 8.5, 7.5, 6.8, 8.1, 7.0,};
    calcula_media_desvio(notas, 5, m, desvio);

    cout << "A média das notas foi : " << m << endl;
    cout << "O desvio padrão foi : " << desvio << endl;
    return 0;
}