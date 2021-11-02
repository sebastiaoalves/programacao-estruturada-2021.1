#include <map>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    map<string, double> precos;
    int n, p, casos;
    cin >> casos;
    cout << fixed << setprecision(2);
    for(int c=0; c<casos; c++){
        precos.clear();
        cin >> n;
        string nome;
        double preco, total=0.0;

        for(int i=0;i<n;i++){
            cin >> nome >> preco;
            precos[nome] = preco;
        }
        cin >> p;
        int quantidade;
        for(int i=0;i<p;i++){
            cin >> nome >> quantidade;
            total+= quantidade * precos[nome];
        }
        cout << "R$ " << total << endl;
    }
    return 0;
}