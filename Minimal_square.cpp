#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        if(b*b>(a*a*4)) cout<<b*b;
        else cout<<a*a*4;
        cout<<endl;
    }
}