#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double raio;
    cout << "Raio" << raio << endl;
    cout << "Digite um raio para saber a área do círculo:";
    cin >> raio;

    // Constante M_PI e função pow definidas no arquivo de cabeçalho cmath
    double area = M_PI * pow(raio, 2);

    // Constante fixed e função setprecision definidas no arquivo iomanip
    cout << fixed << setprecision(2);
    cout << "Área: " << area << endl;
	
    double d =  0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    cout << setprecision(20);
    cout << d << endl;  // Mostrando o erro de precisão dos números de ponto flutuante
    
    return 0;
}
