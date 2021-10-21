#include "arquivo1.cpp"

int main(){

#if defined(TESTE)
    imprime();
#else
    cout << "Teste 2!" << endl;
#endif

    return 0;
}