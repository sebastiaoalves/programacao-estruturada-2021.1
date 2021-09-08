#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int *ptr = (int *) malloc (10*sizeof(int));
    double *ptr2 = (double *) calloc (10, sizeof(int));
    double *ptr3 = (double *) calloc (10, sizeof(int));
    free(ptr);
    free(ptr2);
    free(ptr3);
    return 0;
}