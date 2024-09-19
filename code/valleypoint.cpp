#include<iostream>
using namespace std;


int valley(int a[],int n){
    int s = 0;
    int e = n -1;
    int m = s + (e-s)/2;
    while(s<e)
    {
        if(a[m] > a[m+1] ){
            s = m + 1;
        }
        else if(a[m] < a[m+1]){
            e = m;
        }
        m = s + (e-m)/2;
    }
    return s;
}


int main()
{
    int a[10] = {10,9,8,7,6,5,4,1,2,3};
    cout<<valley(a,10);
    return 0;
}