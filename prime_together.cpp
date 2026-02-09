#include<iostream>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, c=0; cin>>n;
        for(int i=1; i<n; i++){
            if(gcd(i,n)==1) c++;
        }
        cout<<prime(c)<<endl;
    }
}