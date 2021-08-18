#include <iostream>

using namespace std;

int main(){
    int opcao;
    do{
        cout << "Digite a categoria para saber o valor da inscrição:\n1- Professor" << endl;
        cout << "2- Aluno\n3- Comunidade externa\n4- Sair do programa." << endl;
        cin >> opcao;
        if(opcao<1 || opcao>4){
            cerr << "ERRO: A opção deve ser entre 1 e 4." << endl;
            continue;
        }
        if (opcao==4)
            break;

        cout << "Exibir o valor da inscrição" << endl;

    }while(true);

}