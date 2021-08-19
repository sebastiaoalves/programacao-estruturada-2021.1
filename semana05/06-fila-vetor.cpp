#include <iostream>

using namespace std;

struct cliente_banco{
    string nome;
    int numero_chamada;
};

const int TAM_MAX_FILA = 10;

struct fila_banco{
    cliente_banco clientes_na_fila[TAM_MAX_FILA];
    int inicio, fim;
    int numero_ficha_inicial;
};


// Cria uma fila vazia
fila_banco inicia_fila(int ficha_inicial_fila){
    fila_banco fila = { {}, 0, 0, ficha_inicial_fila };
    return fila;
}

// Verifica se a fila está cheia
bool esta_cheia(fila_banco a_fila){
    if(a_fila.inicio==0 && a_fila.fim==TAM_MAX_FILA)
        return true;
    return false;
}

// Verifica se a fila está vazia
bool esta_vazia(fila_banco a_fila){
    if(a_fila.inicio == a_fila.fim)
        return true;
    return false;
}

// Insere o cliente na fila e devolve a fila alterada
fila_banco insere_fila (fila_banco a_fila, cliente_banco o_cliente){
    // fila está cheia
    if(esta_cheia(a_fila))
        cerr << "Não é possível inserir, porque a fila está cheia" << endl;
    // fila_vazia
    else if(esta_vazia(a_fila)){
        a_fila.clientes_na_fila[a_fila.inicio] = o_cliente;
        a_fila.fim++;
    }else if(a_fila.fim!=TAM_MAX_FILA){
        // fila está parcialmente preenchida e há espaço no fim
        a_fila.clientes_na_fila[a_fila.fim] = o_cliente;
        a_fila.fim++;
    }else{
        // fila está parcialmente preenchida e não há espaço no fim
        // TODO
    }
    return a_fila;
}

// Exibir a fila
void exibe_fila(fila_banco a_fila){
    for(int i = a_fila.inicio; i<a_fila.fim; i++)
        cout << "Nome: " << a_fila.clientes_na_fila[i].nome  << "\nFicha: " << a_fila.clientes_na_fila[i].numero_chamada << endl;
}


// remove_fila
// reorganiza_fila


int main(){
    fila_banco fila_normal = inicia_fila(1) , fila_prioridade = inicia_fila(501);

    cliente_banco sebastiao = {"Sebastião", 1};
    cliente_banco sebastian = {"Sebastian", 2};
    cliente_banco icaro = {"Icaro", 3};
    cliente_banco ivone = {"Ivone", 4};

    fila_normal = insere_fila(fila_normal, sebastiao);
    fila_normal = insere_fila(fila_normal, sebastian);
    fila_normal = insere_fila(fila_normal, icaro);
    fila_normal = insere_fila(fila_normal, ivone);

    exibe_fila(fila_normal);

    return 0;
}