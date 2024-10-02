#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[] = {0,1,2,3,55,4,4,5,6};
    cout<<isSorted(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}