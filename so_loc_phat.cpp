#include<iostream>
using namespace std;

bool check(int n){
    while(n){
        int a=n%10;
        if(a!=8&&a!=6&&a!=0) return false;
        n/=10;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<(check(n)?"YES":"NO");
        cout<<endl;
    }
}