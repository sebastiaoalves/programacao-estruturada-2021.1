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
        auto atual = homens.begin();
        int tamanho=n;
        while(tamanho!=1){    // Enquanto não resta apenas 1
            for(int i=0;i<m-1;i++){
                atual++;            // Pula de um em um
                if(atual == homens.end())  // Se for o último, volta para o início
                    atual = homens.begin();
            }
            homens.erase(atual++); // "Mata" no que parar
            if(atual == homens.end()) atual = homens.begin();
            tamanho--;
        }
        cout << "Case " << c << ": " << homens.front() << endl;
    }
    return 0;
}