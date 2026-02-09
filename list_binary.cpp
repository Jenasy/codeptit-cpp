#include<iostream>
#include<string>
using namespace std;

void binary(int n, string s){
    if(s.length() == n){
        cout<<s<<" ";
        return;
    }
    for(int i=0; i<=1; i++){
        s.push_back(i+'0');
        binary(n,s);
        s.pop_back();
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s = "";
        binary(n,s);
        cout<<endl;
    }
}