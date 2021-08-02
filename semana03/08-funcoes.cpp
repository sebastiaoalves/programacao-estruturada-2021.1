#include <iostream>

using namespace std;

// soma de dois números inteiros
int soma (int a, int b) {
    int c = a + b;
    return c;
}

// Verifica se a opção é válida
bool validaOpcao (char ch){
    if(ch=='y' || ch=='s')
        return true;
    return false;
}

// Exibir informação
void exibeInfo( ) {
    cout << "Esta função retorna todas as qualidades do presidente da república" << endl;
}

int main(){
    return 0;
}