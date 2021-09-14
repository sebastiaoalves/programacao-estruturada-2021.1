#include <iostream>

using namespace std;

int main(){

    int *vetor_dinamico;
    int tamanho_do_vetor;

    cout << "Digite o número de elementos do vetor: ";
    cin >> tamanho_do_vetor;

    vetor_dinamico = new int[tamanho_do_vetor];
    for (int i=0;i<tamanho_do_vetor;i++){
        cout << "Digite o " << i+1 << "º elemento: ";
        cin >> vetor_dinamico[i];
    }

    int **vetor_ponteiros;
    vetor_ponteiros = new int* [tamanho_do_vetor];
    for(int i=0;i<tamanho_do_vetor; i++)
        vetor_ponteiros[i] = vetor_dinamico + i;


    // Algoritmo de ordenação por inserção para o vetor original 
    /*
    for (int i=0; i<tamanho_do_vetor-1; i++)
        for(int j=i+1;j<tamanho_do_vetor;j++){
            if(vetor_dinamico[j]<vetor_dinamico[i]){
                int tmp = vetor_dinamico[i];
                vetor_dinamico[i] = vetor_dinamico[j];
                vetor_dinamico[j] = tmp;
            }
        }
    */

    // Algoritmo de ordenação por inserção para o vetor original 
    for (int i=0; i<tamanho_do_vetor-1; i++)
        for(int j=i+1;j<tamanho_do_vetor;j++){
            if( *vetor_ponteiros[j] < *vetor_ponteiros[i]){
                int *tmp = vetor_ponteiros[i];
                vetor_ponteiros[i] = vetor_ponteiros[j];
                vetor_ponteiros[j] = tmp;
            }
        }

    cout << "Vetor original" << endl;
    for (int i=0;i<tamanho_do_vetor;i++)
        cout << "O " << i+1 << "º elemento: " << vetor_dinamico[i] << endl;
     
    cout << "Vetor de ponteiros" << endl;
    for (int i=0;i<tamanho_do_vetor;i++)
        cout << "O " << i+1 << "º elemento: " << *vetor_ponteiros[i] << endl;

    delete [] vetor_dinamico;
    delete [] vetor_ponteiros;
    return 0;
}
