#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,5,6,7,1,2,4,5,6};
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}