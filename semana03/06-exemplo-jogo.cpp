#include <iostream>
#include <algorithm>

using namespace std;

string le_palavra ( ) {
    string palavra;
    cout << "Digite a palavra a ser embaralhada: ";
    cin >> palavra;
    return palavra;
}

string embaralha_palavra (string palavra_original){
    string palavra_embaralhada = random_shuffle(
        palavra_original.begin(), palavra_original.end());
    return palavra_embaralhada;
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
    cout << "Foi lida a palavra: " << palavra_original << endl;

    // Embaralhar a palavra

/*
    cout << calcular_pontuacao(2, 5) << " estrelas " << endl;
    cout << calcular_pontuacao(1, 5) << " estrelas " << endl;
    cout << calcular_pontuacao(2, 20) << " estrelas " << endl;
    cout << calcular_pontuacao(1, 50) << " estrelas " << endl;
    cout << calcular_pontuacao(0, 7) << " estrelas " << endl;
    cout << calcular_pontuacao(0, 30) << " estrelas " << endl;
*/

    
    // Exibir a primeira palavra embaralhada
    // Ler a primeira tentativa
    // Verificar se acertou a 1ª
    // Exibir a segunda palavra embaralhada
    // Ler a segunda tentativa
    // Verificar se acertou a 2ª
    // Medir o tempo gasto
    // Exibir pontuação
    return 0;
}