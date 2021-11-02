#include <iostream>
#include <vector>

using namespace std;

int main(){
    int casos, n, m;
    cin >> casos;
    for (int c=1; c<=casos; c++){
        cin >> n >> m;
        vector<int> homens(n);           // Cria uma lista de homens
        for(int i=0;i<n; i++)
            homens[i]=i+1;    // Adiciona todos os homens de 1 a n
        int proximo=0, tamanho=n;
        while(tamanho!=1){    // Enquanto não resta apenas 1
            proximo = (proximo+m-1)%tamanho;
            auto atual = homens.begin();
            advance(atual, proximo);
            homens.erase(atual); // "Mata" no que parar
            tamanho--;
        }
        cout << "Case " << c << ": " << homens.front() << endl;
    }
    return 0;
}