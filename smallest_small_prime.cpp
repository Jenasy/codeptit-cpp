#include<iostream>
#define MAX 10000
using namespace std;

int a[MAX];

void sieve(){
    fill(a,a+MAX,0);
    for(int i=2; i*i<=MAX; i++){
        if(!a[i]) for(int j=i*i; j<=MAX; j+=i){
            if(!a[j]) a[j]=i;
        }
    }
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<1<<" ";
        for(int i=2; i<=n; i++){
            if(i%2==0) cout<<2<<" ";
            else if(!a[i]) cout<<i<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}