#include <iostream>

using namespace std;

template <typename Tipo_dado>
class Noh_arvore_binaria{

    public:
        Tipo_dado dado;
        Noh_arvore_binaria<Tipo_dado> *filho_esquerda, *filho_direita;

        Noh_arvore_binaria(){
        }

        Noh_arvore_binaria(Tipo_dado o_dado, 
                            Noh_arvore_binaria<Tipo_dado> *esquerda, 
                            Noh_arvore_binaria<Tipo_dado> *direita){
            dado = o_dado;
            filho_esquerda = esquerda;
            filho_direita = direita;
        }

        ~Noh_arvore_binaria(){
            cout  << "Destruindo o nó " << dado << endl;
            if(filho_esquerda != nullptr)
                delete filho_esquerda;
            if(filho_direita != nullptr)
                delete filho_direita;
        }
};

template <typename Tipo_dado>
class arvore_binaria{
    private:
        Noh_arvore_binaria<Tipo_dado> *raiz;

    public:

        arvore_binaria(){
            raiz = nullptr;
        }

        void insere_elemento(Tipo_dado elemento) {
            // Criar um novo no

            Noh_arvore_binaria<Tipo_dado> *novo;
            novo = new Noh_arvore_binaria <Tipo_dado> (elemento, nullptr, nullptr);

            // Árvore vazia
            if(raiz == nullptr){
                cout << elemento << " é a nova raiz da árvore" << endl;
                raiz = novo;
            }else{
                Noh_arvore_binaria<Tipo_dado> *tmp=raiz;
                do{
                    // Inserir na sub-árvore à esquerda
                    if(elemento < tmp->dado){
                        if(tmp->filho_esquerda==nullptr){
                            tmp->filho_esquerda = novo;
                            break;
                        }else{
                            tmp = tmp->filho_esquerda;
                        }
                    }
                    // Inserir na sub-árvore à direita
                    else{
                        if(tmp->filho_direita==nullptr){
                            tmp->filho_direita = novo;
                            break;
                        }else{
                            tmp = tmp->filho_direita;
                        }
                    }
                }while(true);
            }
        }


        bool contem_elemento (Tipo_dado elemento){

            Noh_arvore_binaria<Tipo_dado> *tmp = raiz;

            while(tmp != nullptr){
                if(tmp->dado == elemento)
                    return true;
                else if(elemento < tmp->dado)
                    tmp = tmp->filho_esquerda;
                else
                    tmp = tmp->filho_direita;
            }

            return false;
        }



        ~arvore_binaria(){
            cout << "Destruindo a árvore..." << endl;
            delete raiz;
        }

};

int main(){
    arvore_binaria<string> arvore1;
    arvore1.insere_elemento("Sebastião");
    arvore1.insere_elemento("Alves");

    arvore_binaria<int> arvore2;
    arvore2.insere_elemento(10);
    arvore2.insere_elemento(0);
    arvore2.insere_elemento(20);
    arvore2.insere_elemento(-1);
    arvore2.insere_elemento(4);

    if(arvore1.contem_elemento("Sebastião"))
        cout << "Encontrou Sebastião " << endl;
    
    if(arvore1.contem_elemento("Alves"))
        cout << "Encontrou Alves " << endl;

    if(arvore2.contem_elemento(10))
        cout << "Achou o número 10" << endl;

    if(arvore2.contem_elemento(50))
        cout << "Achou o número 50" << endl;
    
    if(arvore2.contem_elemento(-1))
        cout << "Achou o número -1" << endl;
    return 0;
}