#include<iostream>
using namespace std;

void callback(int n, int length, bool a[], string s=""){
    if(length==n){
        cout<<s<<" ";
        return;
    }
    for(int i=0; i<n; i++){
        if(a[i]) continue;
        a[i] = true;
        string sub = to_string(i+1);
        s += sub;
        callback(n,length+1,a,s);
        a[i] = false;
        s.resize(s.length()-sub.length());
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool a[n];
        fill(a,a+n,false);
        callback(n,0,a);
        cout<<endl;
    }
}