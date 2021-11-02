#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista_inteiros;
    lista_inteiros.push_back(10);
    lista_inteiros.push_back(-22);
    lista_inteiros.push_back(0);
    lista_inteiros.push_back(3);
    lista_inteiros.push_back(-1);

    lista_inteiros.pop_front();
    lista_inteiros.pop_back();

    for(int i:lista_inteiros)
        cout << i << endl;

    return 0;
}