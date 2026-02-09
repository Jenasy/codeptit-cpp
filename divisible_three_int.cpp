#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

ll find(ll n, int m){
    for(ll i=pow(10,m-1)/n; i<pow(10,m)/n; i++){
        if(i*n>=pow(10,m-1)) return i*n;
    }
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int x,y,z,n;
        cin>>x>>y>>z>>n;
        ll d = lcm(lcm(x,y),z);
        cout<<find(d,n)<<endl;
    }
}