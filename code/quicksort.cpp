#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int s,int e){
    int k = arr[s];
    int c = 0;
    for(int i = s+1;i<=e;i++){
        if(k >= arr[i])
            c++;
        
    }
    c =  s+ c;  
    swap(arr[s],arr[c]);
    //left part & right part
    int i = s,j=e;
    while(i<c && j>c){
        while(arr[i] <=arr[c]){
            i++;
        }
        while(arr[j] >= arr[c]){
            j--;
        }
        if(i<c && j>c){
            swap(arr[i],arr[j]);
            i++;j--;
        }

    }
    return c;

}
void quick(vector<int> &arr,int s , int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quick(arr,s,p-1);
    quick(arr,p+1,e);
}
int main(){
    vector<int> arr = {9,8,7,5,6,3,2,1,4,5,6,8,5,6,9,5,5};
    quick(arr,0,arr.size()-1);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}