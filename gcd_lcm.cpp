#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a, long long b){
    return a*b/gcd(a,b);
}

int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
    }
}