#include <iostream>
#include <queue>


using namespace std;

int main(){
    queue<string> fila;
    fila.push("sebastião");
    fila.push("emidio");
    fila.push("alves");
    fila.push("filho");
    cout << fila.front() << endl;
    cout << fila.back() << endl;

    fila.pop();
    fila.push("desconhecido");
    
    cout << fila.front() << endl;
    cout << fila.back() << endl;

    return 0;
}