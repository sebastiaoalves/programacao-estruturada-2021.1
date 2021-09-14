#include <iostream>

using namespace std;

struct noh_pilha{
    int dado;
    noh_pilha *anterior;
};

void exibe_pilha(noh_pilha *topo){
    if(topo == nullptr)
        cout << "Pilha vazia." << endl;
    else{
        noh_pilha *tmp = topo;
        cout << "Conteúdo da pilha: " << endl;
        while(tmp != nullptr){
            cout << tmp->dado << endl;
            tmp = tmp->anterior;
        }
    }
}

noh_pilha *insere_na_pilha(noh_pilha *topo, int dado){
    noh_pilha *novo = new noh_pilha;
    novo->dado = dado;
    novo->anterior = topo;
    return novo;
}

int main(){
    noh_pilha *topo = nullptr;
    topo = insere_na_pilha(topo, 10);
    exibe_pilha(topo);
    topo = insere_na_pilha(topo, 20);
    exibe_pilha(topo);
    topo = insere_na_pilha(topo, 30);
    exibe_pilha(topo);
    return 0;
}