#include <iostream>

using namespace std;

int main(){

    int opcao;
    cout << "Digite a opção: ";
    cin >> opcao;

    switch (opcao){
        case 0: cout << "opção 0 escolhida" << endl;
        case 1: cout << "opção 1 escolhida" << endl;
        case 2: cout << "opção 2 escolhida" << endl;
             break;
        case 3: cout << "opção 3 escolhida" << endl;
        default: cout << "opção inválida" << endl;
    }

    const char PROF_UERN='P', ALUNO_UERN='A', FUNC_UERN='F';
    
    char tipo;
    cin >> tipo;
    double valor;

    if(tipo == PROF_UERN)
        valor = 100;
    else 
        if(tipo == ALUNO_UERN)
            valor = 30;
        else 
            if(tipo == FUNC_UERN)
                valor = 50;
            else
                valor = 150;
    
    switch (tipo){
        case PROF_UERN:
            valor = 100;
            break;
        case ALUNO_UERN:
            valor = 30;
            break;
        case FUNC_UERN:
            valor = 50;
            break;
        default:
            valor = 150;
    }

    char tipo2;
    switch(tipo2){
        case 'p':
        case 'a':
        case 'f':
    }

    int tipo3;
    switch(tipo3){
        case 1:
        case 2:
        case 3:
    }
    return 0;
}