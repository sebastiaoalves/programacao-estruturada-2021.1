#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// (0,0) (0,5) (5,5) (5, 0)

// (0,0)
// (0,5) 
// (5,5)
// (5,0)

int main(){

    // Leitura da figura
    int numero_de_pontos;
    cout << "Digite o número de pontos de uma figura geométrica: " << endl;
    cin >> numero_de_pontos;
    double figura [numero_de_pontos][2];
    for(int i=0; i<numero_de_pontos; i++){
        cout << "Digite as coordenadas do " << i+1 << "° ponto: ";
        cin >> figura[i][0] >> figura[i][1];
    }

    // Criando a matriz de rotação
    double angulo;
    cout << "Digite o ângulo (em graus) de rotação da figura: ";
    cin >> angulo;
    angulo = angulo*M_PI/180.0;
    double matriz_de_rotacao[2][2] = 
        { {cos(angulo), sin(angulo)}, 
          {-sin(angulo), cos(angulo)} };

    // Realização da rotação (multiplicação das matrizes)
//    a11 a12 ... a1n         b11 b12 ... b1p        c11 = a11*b11 + a12*b12 + ... a1n*bn1  c12 = a11*b12 + a12*b22 +... a1n*bn2
//    ...                     ...                    ... cij = ai1*b1j + ai2*b2j +  ai3*b3j ... ain * bnj
//    am1 am2 ... amn         bn1 bn2 ... bnp
    double figura_rotacionada [numero_de_pontos][2];
    for (int i=0;i<numero_de_pontos; i++)
        for (int j=0;j<2; j++){
            double cij = 0.0;
            for (int k=0;k<2; k++)
                cij += figura[i][k] * matriz_de_rotacao[k][j];
            figura_rotacionada[i][j] = cij;
        }

    cout << "Figura original " << endl;
    for(int i=0; i<numero_de_pontos; i++)
        cout << figura[i][0] << " " <<  figura[i][1] << endl;

    cout << fixed << setprecision(1);
    cout << "Figura rotacionada " << endl;
    for(int i=0; i<numero_de_pontos; i++)
        cout << figura_rotacionada[i][0] << " " <<  figura_rotacionada[i][1] << endl;
    return 0;
}