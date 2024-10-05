#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int s,int e){
    int m = s + (e-s/2);
    int l1 = m+1-s;
    int l2 = e - m;
    int *f = new int[l1];
    int *se = new int[l2];
    int k = s;
    for(int i = 0;i<l1;i++){
        f[i] = arr[k++];
    }
    for(int i = 0;i<l2;i++){
        se[i] = arr[k++];
    }
    int i = 0;
    int j = 0;
    k = s;
    while(i<l1 && j<l2){
        if(f[i] > se[j]){
            arr[k++] = se[j++];
        }
        else if(f[i] < se[j]){
            arr[k++] = f[i++];
        }
        else{
            arr[k++] = f[i++];
            arr[k++] = se[j++];
        }
    }
    while(i<l1){
        arr[k++] = f[i++];
    }
    while(j<l2){
        arr[k++] = se[j++];
    }
}
void mergesort(vector<int>& arr,int s,int e){
    int m = s + (e-s/2);

    if(s>=e){
        return;
    }
    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    merge(arr,s,e);
}
int main(){
    vector<int> arr = {1,2,5,6,7,1,2,4,5,6};
    int n = arr.size();
    mergesort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}