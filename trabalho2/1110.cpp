#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main(){
    int n;
    while(cin >> n && n!=0){
        queue<int> cartas;
        list<int> descarte;
        for(int i=0;i<n;i++)
            cartas.push(i+1);
        cout << "Discarded cards:";
        if(n>1){
            while(cartas.size()>1){
                descarte.push_back(cartas.front());
                cartas.pop();
                cartas.push(cartas.front());
                cartas.pop();
            }
            int ultima = descarte.back();
            descarte.pop_back();
            for(auto i:descarte)
                cout << " " << i << ",";
            cout << " " << ultima;
        }
        cout << endl;
        cout << "Remaining card: " << cartas.front() << endl;
    }
    return 0;
}