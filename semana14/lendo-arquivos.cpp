#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in ("nada");
    string nome, altura, peso;
    in >> nome >> altura >> peso;
    cout << nome << " " << altura << " " << peso << endl;
    return 0;
}