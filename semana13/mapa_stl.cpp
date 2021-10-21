#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, double> precos;
    precos["feijao"] = 6.20;
    precos["arroz"] = 4.82;
    precos["macarrao"] = 3.48;
    precos["goma"] = 3.97;

    precos["feijao"]+=0.2;

    cout << precos["feijao"] << endl;

    map <int, string> alunos;
    alunos[202018479] = "João";
    alunos[202018485] = "Maria";

    cout << alunos[202018485] << endl;

    for( auto it = precos.begin(); it!=precos.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}