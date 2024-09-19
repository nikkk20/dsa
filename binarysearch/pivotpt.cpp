#include<iostream>
using namespace std;

int pivotcheck(int a[],int n){
    int s = 0;
    int e = n -1;
    int m = s + (e-s)/2;
    while(s<e){
        if(a[m] >= s){
            s = m + 1;
        }
        else{
            e = m;
        }
        m = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int a[] = {7,8,9,1,2,3};
    cout<<pivotcheck(a,6);
    return 0;
}