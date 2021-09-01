#include <iostream>

using namespace std;

struct NohFila{
    string dado;
    NohFila *prox;
};

bool estaVazia (NohFila *inicio){
    if(inicio == nullptr)
        return true;
    else
        return false;
}

NohFila* insereNaFila (NohFila *inicio, string nomeASerInserido){
    NohFila *novo = new NohFila;
    novo->dado = nomeASerInserido;
    novo->prox = nullptr;
    if(estaVazia(inicio))
        return novo;
    NohFila *ultimo = inicio;
    while(ultimo->prox!=nullptr)
        ultimo = ultimo->prox;
    ultimo->prox = novo;
    return inicio;
}

NohFila* removeDaFila (NohFila *inicio){
    if (estaVazia(inicio)){
        cerr << "Erro, fila vazia!" << endl;
        return nullptr;
    }
    NohFila *novoInicio = inicio -> prox;
    cout << "O elemento " << inicio -> dado << " foi retirado da fila" << endl;
    delete inicio;
    return novoInicio;
}

void exibeFila (NohFila* inicio){
    if(estaVazia(inicio)){
        cout << "A fila está vazia." << endl;
        return;
    }
    NohFila *tmp = inicio;
    cout << "Elementos na fila: ";
    while(tmp!=nullptr){
        cout << tmp->dado << " ";
        tmp = tmp->prox;
    }
    cout << endl;
}

void destroiFila (NohFila *inicio){
    NohFila *tmp = inicio;
    while(! estaVazia(tmp)){
        tmp = removeDaFila(tmp);
    }
}

int main(){
    NohFila *inicio = nullptr;

    if(estaVazia(inicio))
        cout << "A fila está vazia" << endl;

    inicio = insereNaFila(inicio, "Sebastião");
    inicio = insereNaFila(inicio, "Icaro");
    inicio = insereNaFila(inicio, "João");
    inicio = insereNaFila(inicio, "Maria");

    exibeFila(inicio);

    inicio = removeDaFila(inicio);

    exibeFila(inicio);
    
    inicio = removeDaFila(inicio);

    exibeFila(inicio);

    destroiFila(inicio);

    return 0;
}