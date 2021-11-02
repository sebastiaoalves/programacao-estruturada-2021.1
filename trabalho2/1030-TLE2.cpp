#include <iostream>
#include <list>

using namespace std;

int main(){
    int casos, n, m;
    cin >> casos;
    for (int c=1; c<=casos; c++){
        list<int> homens;           // Cria uma lista de homens
        cin >> n >> m;
        for(int i=1;i<=n; i++)
            homens.push_back(i);    // Adiciona todos os homens de 1 a n
        int proximo=0, tamanho=n;
        while(tamanho!=1){    // Enquanto não resta apenas 1
            proximo = (proximo+m-1)%tamanho;
            auto atual = homens.begin();
            advance(atual, tamanho-1);
            homens.erase(atual); // "Mata" no que parar
            tamanho--;
        }
        cout << "Case " << c << ": " << homens.front() << endl;
    }
    return 0;
}