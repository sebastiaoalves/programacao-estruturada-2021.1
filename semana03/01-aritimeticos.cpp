#include <iostream>

using namespace std;

int main( ){
    int x, y, z=0;

    x = 10;

    y = x+5;

    cout << x << " " << y << " " << z << endl;

    y = (x=5) + (z=10) + 5 ;

    cout << x << " " << y << " " << z << endl;

    x=2,y=3,z=4;

    x = 4 * z + (x+2*y) / 2;

    cout << x << " " << y << " " << z << endl;

    x = y = z = 20;

    cout << x << " " << y << " " << z << endl;

    y = ++x + 2;

    cout << x << " " << y << " " << z << endl;

    y = x++ + 2;

    cout << x << " " << y << " " << z << endl;

    x *= y * z - 2;

    cout << x << " " << y << " " << z << endl;

    return 0;
}