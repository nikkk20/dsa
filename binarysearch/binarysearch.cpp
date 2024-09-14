#include<iostream>
using namespace std;
int bsearch(int a[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int a[6] = {1,2,3,4,5,6};
    int key = 1;
    cout<<bsearch(a,6,key);
    return 0;
}