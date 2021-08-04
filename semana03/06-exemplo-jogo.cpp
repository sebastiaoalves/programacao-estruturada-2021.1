#include <iostream>

using namespace std;

// UERN

// REUN
// NURE

string le_palavra ( ) {
    string palavra;
    cout << "Digite a palvra: ";
    cin >> palavra;
    return palavra;
}

//string embaralha_palavra (string palavra_original)


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
//    cout << "1ª exeucção " << endl;
//    le_palavra ( );

    cout << calcular_pontuacao(2, 5) << " estrelas " << endl;

    cout << calcular_pontuacao(1, 5) << " estrelas " << endl;

    cout << calcular_pontuacao(2, 20) << " estrelas " << endl;

    cout << calcular_pontuacao(1, 50) << " estrelas " << endl;

    cout << calcular_pontuacao(0, 7) << " estrelas " << endl;

    cout << calcular_pontuacao(0, 30) << " estrelas " << endl;


    // Embaralhar a palavra
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