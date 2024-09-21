#include<iostream>
using namespace std;
int exp(int x, int y){
    int res = 1;
    while(y > 0){
        if(y%2 != 0){
            res = res * x;
        }
        x = x * x;
        y = y>>1;
    }
    return res;

}
int main(){
    cout<<exp(2,3);
    return 0;
}