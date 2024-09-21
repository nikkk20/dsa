#include <iostream>
using namespace std;
int main(){
    //static allocation
    int row1[] = {1,2,3,4};
    int row2[] = {1,2,3};
    int row3[] = {1,4};
    int *jagged[] = {row1,row2,row3};


    // dynamic
    int n = 4;
    int **arr = new int*[n]; // array of pointers
    //jagged array
    arr[0] = new int[4];
    arr[0] = new int[3];
    arr[0] = new int[2];
    arr[0] = new int[7];
    return 0;
}