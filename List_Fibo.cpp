#include<iostream>
using namespace std;

void load(long long fibo[]){
    for(int i=2; i<93; i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int main(){
    int t; cin>>t;
    long long fibo[94]={1,1};
    load(fibo);
    while(t--){
        int a,b;
        cin>>a>>b;
        for(int i=a; i<=b; i++) cout<<fibo[i-1]<<" ";
        cout<<endl;
    }
}