#include<iostream>
using namespace std;
int sum(int arr[],int size){

    if(size<=0){
        return 0;
    }
    else{
        return sum(arr,size-1) + arr[size-1];
    }
}
int main(){
    int arr[] = {0,1,2,3,55,4,4,5,6};
    cout<<sum(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
