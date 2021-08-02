#include <iostream>

using namespace std;

int main( ){
    int x, y = 10, z = 19;

    x=~0;

    cout << x << endl;

    x = y & z;

    cout << x << endl;

    x = y | z;

    cout << x << endl;

    x = y ^ z;

    cout << x << endl;

    x>>2;

    cout << x << endl;

    x<<4;

    cout << x << endl;

    return 0;

}