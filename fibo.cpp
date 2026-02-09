#include<iostream>
#define ll long long
using namespace std;

ll a[94];

void sieve(){
    a[0]=0; a[1]=1;
    for(int i=2; i<= 94; i++) a[i]=a[i-1]+a[i-2];
}

bool find(ll n){
    for(int i=0; i<94; i++){
        if(n==a[i]) return true;
    }
    return false;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        cout<<(find(n)?"YES":"NO")<<endl;
    }
}