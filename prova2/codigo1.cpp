#include <iostream>

using namespace std;

void troca1 (int a, int b){
    int tmp = a;
    a = b;
    b = a;
}

void troca2 (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = *a;
}

void troca3 (int &a, int &b){
    int tmp = a;
    a = b;
    b = a;
}

int main(){
    int x, y;
    x = 5;
    y = 10;
    troca1(x, y);
    cout << "x: " << x << " y: " << y << endl;

    x = 5;
    y = 10;
    troca2(x, y);
    cout << "x: " << x << " y: " << y << endl;

    x = 5;
    y = 10;
    troca3(x, y);
    cout << "x: " << x << " y: " << y << endl;
}