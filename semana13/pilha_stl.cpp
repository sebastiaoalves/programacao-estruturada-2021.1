#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> pilha_inteiros;
    pilha_inteiros.push(10);
    pilha_inteiros.push(20);
    pilha_inteiros.push(30);
    cout << pilha_inteiros.top() << endl;
    pilha_inteiros.pop();
    cout << pilha_inteiros.top() << endl;
    pilha_inteiros.push(40);

    
    return 0;
}


// 20
// 10