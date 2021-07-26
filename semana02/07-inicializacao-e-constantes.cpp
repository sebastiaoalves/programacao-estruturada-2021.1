#include <iostream>

using namespace std;

int main( ){

    // Inicialização com atribuição
    bool ativo=true; 
    //int a, b=3;

    // Inicialização com parênteses
    //bool ativo(false); 
    double nota1(10.0);
    //double nota2(2.1);

    // Inicialização com chaves
    //bool ativo{true}; 
    //char letra{‘a’}; 
    string nome{"sebastiao"};

    // Declaração de constantes
    const int num_opcoes = 3;
    const char SAIR='S';

    // Estilo C
    #define PI 3.14

    double raio = 10;
    cout << "Área: " << PI * raio * raio  << endl;
    return 0;
}
