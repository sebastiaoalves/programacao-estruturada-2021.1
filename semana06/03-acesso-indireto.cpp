#include <iostream>

using namespace std;

int main(){

    int a=100, b, *ptr;
    ptr = &a;
    cout << *ptr << endl;
    *ptr = 200;  // indireção
    cout << "Valores de a e b" << endl;
    cout << a << endl;
    cout << b << endl;

    cout << "Valores de a e b" << endl;
    ptr = &b;
    *ptr=500;
    cout << a << endl;
    cout << b << endl;

    return 0;
}
