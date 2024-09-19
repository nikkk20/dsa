#include<iostream>
using namespace std;
int first(int a[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(a[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(a[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int last(int a[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(a[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(a[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int a[6] = {0,1,1,1,1,1};
    int key = 1;
    cout<<first(a,6,key)<<endl;
    cout<<last(a,6,key);
    return 0;
}