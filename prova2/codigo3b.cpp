#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> pilha_string;
    
    pilha_string.push("programação");
    pilha_string.push("estruturada");

    pilha_string.pop();

    pilha_string.push("UERN");

    cout << "Topo da pilha: " << pilha_string.top() << endl;

    cout << "Número de elementos na pilha: " << pilha_string.size() << endl;


    return 0;
}