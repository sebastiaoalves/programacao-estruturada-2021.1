#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    char palavra[5]; // string palavra;
    cin >> palavra;
    sort(palavra, palavra+4); // função de ordenação
    do{
        cout << palavra << endl;
    }while( next_permutation (palavra, palavra+4) );
    return 0;
}