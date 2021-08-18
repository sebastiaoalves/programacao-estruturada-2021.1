#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,10> codigo_ddd;
    for(int i=0; i<codigo_ddd.size();i++)
        cin >> codigo_ddd[i];
    
    for(int cod:codigo_ddd)
        cout << cod << endl;

    return 0;
}