#include <iostream>

using namespace std;

int main(){
    int fat=1;
    for(int n=7;n>1;fat *= n--);
    cout << fat << endl;
    return 0;
}
