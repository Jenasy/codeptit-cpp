#include<iostream>
using namespace std;

bool prime[100001];

void sieve(){
    fill(prime,prime+100000,true);
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=100000; i++){
        if(prime[i]) for(int j=i*i; j<100001; j+=i){
            if(prime[j]) prime[j]=false;
        }
    }
}

int count(int n, int m){
    int c=0;
    for(int i=n; i<=m; i++){
        if(prime[i]) c++;
    }
    return c;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<count(n,m)<<endl;
    }
}