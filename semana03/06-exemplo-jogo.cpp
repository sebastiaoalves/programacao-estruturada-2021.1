#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

string le_palavra ( ) {
    string palavra;
    cout << "Digite a palavra a ser embaralhada: ";
    cin >> palavra;
    return palavra;
}

string embaralha_palavra (string palavra_original){
    srand(time(nullptr));
    string palavra_modificada = palavra_original;
    random_shuffle(palavra_modificada.begin(), palavra_modificada.end());
    return palavra_modificada;
}


int calcular_pontuacao (int num_palavras_corretas, int tempo_gasto){
    if(num_palavras_corretas == 2 && tempo_gasto < 10)
        return 5;
    else if(num_palavras_corretas == 1 && tempo_gasto < 10)
        return 4;
    else if(num_palavras_corretas == 2 && tempo_gasto > 10)
        return 3;
    else if(num_palavras_corretas == 1 && tempo_gasto > 10)
        return 2;
    else if(num_palavras_corretas == 0 && tempo_gasto < 10)
        return 1;
    else
        return 0;
}

int main(){
    // Ler a palavra
    string palavra_original = le_palavra ( );
    
    // Embaralhar a palavra
    string palavra1 = embaralha_palavra(palavra_original);
    
    // Exibir a primeira palavra embaralhada
    cout << "1ª palavra a ser digitada: " << palavra1 << endl;
    time_t tempo_inicial = time(nullptr);

    // Ler a primeira tentativa
    string tentativa1;
    cout << "Digite a 1ª palavra: ";
    cin >> tentativa1;

    // Verificar se acertou a 1ª
    int acertos = 0;
    if (tentativa1 == palavra1)
        acertos++;
    
    // Exibir a segunda palavra embaralhada
    string palavra2 = embaralha_palavra(palavra_original);
    cout << "2ª palavra a ser digitada: " << palavra2 << endl;

    // Ler a segunda tentativa
    string tentativa2;
    cout << "Digite a 2ª palavra: ";
    cin >> tentativa2;

    time_t tempo_final = time(nullptr);

    // Verificar se acertou a 2ª
    if (tentativa2 == palavra2)
        acertos++;

    cout << "Acertos: " << acertos << endl;

    // Medir o tempo gasto
    int tempo_gasto = tempo_final - tempo_inicial;

    cout << "Tempo gasto: " << tempo_gasto << " segundos." << endl;

    // Exibir pontuação
    int estrelas = calcular_pontuacao(acertos, tempo_gasto);
    cout << "Sua pontuação: " << estrelas << " estrelas!" << endl;

    return 0;
}