#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 10;
    int c = 0;
    vector<bool> primes(n+1,true);
    primes[0] =  false;
    primes[1] = false;
    for(int i = 2;i<n;i++){
        if(primes[i]){
            c++;
            for(int j = 2*i;j<n;j=j+i){
                primes[j] = false;
            }
        }
    }
    cout<<c;
    return 0;
}