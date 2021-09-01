#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int gera_numero_aleatorio(){
    srand (time (nullptr));  // Gera uma semente aleatória
    int numero = rand() % 10 + 1;
    return numero;
}

// Ler as tentativas do usuário
int le_tentativas_usuario(int numero_a_ser_adivinhado){

    cout << "Você tem que adivinha um número entre 1 e 1024" << endl;
    
    int tentativas = 0, chute_usuario;

    do{
        cout << "Digite seu palpite: ";
        cin >> chute_usuario;
        if ( numero_a_ser_adivinhado > chute_usuario)
            cout << "Errou! Digite um número maior!"  << endl;
        else if ( numero_a_ser_adivinhado < chute_usuario )
            cout << "Errou! Digite um número menor!"  << endl;
        else
            cout << "Parabéns! Você acertou!" << endl;

        tentativas++;
    }while(chute_usuario != numero_a_ser_adivinhado);
    return tentativas;
}

// Calcular a pontuação
int calcula_pontuacao (int numero_tentativas, int tempo_ate_acertar){
    return 0;
}

int main(){

    // Gera número aleatorio
    int numero_a_ser_adivinhado = gera_numero_aleatorio();

    // Ler as tentativas do usuário
    time_t hora_inicio = time(nullptr);
    int tentativas_do_usuario = le_tentativas_usuario(numero_a_ser_adivinhado);
    time_t hora_fim = time(nullptr);

    cout << "O usuário demorou " << hora_fim - hora_inicio  << " segundos." << endl;

    // Calcular a pontuação

    // Exibir o resultado

    return 0;
}