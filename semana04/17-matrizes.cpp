#include <iostream>

using namespace std;

int main(){
    int mat [2][2]={ {1,2}, {3,4} };
    int mat2 [][2][2] { { {1,2}, {3,4} }, { {4,5}, {6,7} } };
    double poligono[200][3];
    cin >> poligono [0][0] >> poligono[0][1] >> poligono[0][2];
    for (int i=0;i<200;i++)
        for(int j=0;j<3;j++)
            cin >> poligono[i][j];
    return 0;
}