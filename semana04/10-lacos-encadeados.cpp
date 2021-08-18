#include <iostream>

using namespace std;

int main(){
    for (char letra1='a'; letra1<='z';letra1++)
        for (char letra2='a'; letra2<='z';letra2++)
            for (char letra3='a'; letra3<='z';letra3++)
                cout << letra1 << letra2 << letra3 << endl;
 
    return 0;
}