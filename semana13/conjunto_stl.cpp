#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> conjunto;
    conjunto.insert(10);
    conjunto.insert(5);
    conjunto.insert(-1);
    conjunto.insert(7);
    conjunto.insert(14);
    conjunto.insert(2);

    for(auto elemento:conjunto)
        cout << elemento << " " << endl;

    if(conjunto.find(50) != conjunto.end())
        cout << "O conjunto possui o elemento 50" << endl;

    if(conjunto.find(-1) != conjunto.end())
        cout << "O conjunto possui o elemento -1" << endl;


    conjunto.insert(14);
    conjunto.insert(14);
    conjunto.insert(14);

    for(auto elemento:conjunto)
        cout << elemento << " " << endl;

    
    return 0;
}