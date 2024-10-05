#include<iostream>
using namespace std;
void rev(string* s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
}
int main(){
    string *s = "nik";
    rev(s,0,s.length()-1);
    cout<<s;
    return 0;
}
