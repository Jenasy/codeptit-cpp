#include<iostream>
#define ll long long
#define P 1000000007
using namespace std;

// Tính a^exp mod P (dùng fast exponentiation)
ll power(ll base, ll exp, ll mod){
    ll result = 1;
    base %= mod;
    while(exp > 0){
        if(exp % 2 == 1) result = result * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return result;
}

// Nghịch đảo modular của a
ll modInverse(ll a){
    return power(a, P-2, P);
}

ll giaithua(int r){
    if(r==0) return 1;
    return (r%P * giaithua(r-1)%P)%P;
}

ll process(int n, int r){
    ll gt = giaithua(r);
    ll com = 1;
    for(int i=n; i>n-r; i--){
        com = com%P * i%P;
        com%=P;
    }
    return com * modInverse(gt) % P;  // Dùng nghịch đảo thay vì chia
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        cout<<process(n,r)<<endl;
    }
}