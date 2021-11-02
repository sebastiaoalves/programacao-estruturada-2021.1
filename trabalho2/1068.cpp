#include <iostream>
#include <stack>

using namespace std;

int main(){
    string expressao;
    while(getline(cin, expressao)){
        stack<char> pilha;
        bool correta = true;
        for(char ch:expressao){
            if(ch=='(')
                pilha.push(ch);
            else if (ch==')')
                if(!pilha.empty())
                    pilha.pop();
                else{
                    correta=false;
                    break;
                }
        }
        if(correta && pilha.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
    return 0;
}