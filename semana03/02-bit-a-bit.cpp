#include <iostream>

using namespace std;

int main( ){
    int x, y = 10, z = 19;

    x=~10;   // ~1010
            //   0101

    cout << x << endl;

    x = y & z;   //  01010
                 //  10011
                 //  00010

    cout << x << endl;

    x = y | z;   //  01010
                 //  10011
                 //  11011

    cout << x << endl;

    x = y ^ z;  // xor 0^0 = 0    0^1=1
                //     1^1 = 0    1^0=1

    cout << x << endl;

    x>>2; // 101011 ==> 001010 |

    cout << x << endl;

    x<<4; // 001010 ==> 100000

    cout << x << endl;

    return 0;

}