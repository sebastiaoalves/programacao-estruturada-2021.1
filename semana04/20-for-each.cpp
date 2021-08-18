#include <iostream>

using namespace std;

int main(){
    int vetor[20]; // ...
    for (int i=0; i<20;i++)
        cout << vetor[i] << endl;

    int vetor[20]; // …                        
    for (int a : vetor)                            
        cout << a << endl;                           
    return 0;
}