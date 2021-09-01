#include <iostream>

using namespace std;

int main(){
    
    double vetor[3]= {1,2,3}; 
    
    volatile double *ptr=vetor+1;

    cout << *ptr << endl;

    cout << *(ptr-1) << endl;
    ptr++;

    cout << ptr[0] << endl;

    ptr = vetor;

    for (int i = 0 ; i<3 ; i++)
        cout << *(ptr+i) << endl;

    return 0;
}
