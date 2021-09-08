#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_MAX = 16;

int gera_numero_aleatorio(){
    srand (time (nullptr));  // Gera uma semente aleatória
    int numero = rand() % NUM_MAX + 1;
    return numero;
}

// Ler as tentativas do usuário
int le_tentativas_usuario(int numero_a_ser_adivinhado){

    cout << "Você tem que adivinha um número entre 1 e " << NUM_MAX << endl;
    
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
    if(numero_tentativas<=5 && tempo_ate_acertar<60)
        return 5;
    else if (numero_tentativas<=8 && tempo_ate_acertar < 60)
        return 4;
    else if (numero_tentativas<=10 && tempo_ate_acertar < 60)
        return 3;
    else if (numero_tentativas<=8)
        return 2;
    else if (numero_tentativas<=10)
        return 1;
    else
        return 0;
}

int main(){

    // Gera número aleatorio
    int numero_a_ser_adivinhado = gera_numero_aleatorio();

    // Ler as tentativas do usuário
    time_t hora_inicio = time(nullptr);

    int tentativas_do_usuario = le_tentativas_usuario(numero_a_ser_adivinhado);

    time_t hora_fim = time(nullptr);
    int tempo_decorrido = hora_fim - hora_inicio;

    // Calcular a pontuação
    int estrelas = calcula_pontuacao (tentativas_do_usuario, tempo_decorrido);

    // Exibir o resultado
    cout << "Você usou " << tentativas_do_usuario << " tentativas." << endl;
    cout << "Tempo gasto: " << tempo_decorrido << " segundos!" << endl;
    cout << "Pontuação: " << estrelas << " estrelas!" << endl;

    return 0;
}