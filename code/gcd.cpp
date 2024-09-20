#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    int b = 33;
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if (a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    cout<<a;
    return 0;

}