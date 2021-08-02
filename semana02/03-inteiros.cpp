#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    auto x = 1000000000000000;
    cin >> x;
    cout << x << endl;

    unsigned int ui = 0;
    cout << ui - 1 << endl;  // Erro de underflow

    int max = INT_MAX;
    cout << max + 1 << endl; // Erro de overflow

    return 0;
}
