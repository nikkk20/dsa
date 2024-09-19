#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a = {1,5,9,0,0,6,0};
    for(int i = 1;i<a.size();i++){
        for(int j = 0;j<a.size()-i;j++){
            if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    for(int i = 0;i<a.size();i++)
    cout<<a[i]<<" ";
    return 0;
}
