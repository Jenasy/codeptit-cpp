#include<iostream>
#include<vector>
#define ll long long
#define MAX 100001
using namespace std;

bool prime[MAX];
vector<ll> v;

void sieve(){
    fill(prime,prime+MAX,true);
    prime[0]=prime[1]=false;
    for(ll i=2; i*i<=MAX; i++){
        if(prime[i]) {
            for(ll j=i*i; j<MAX; j+=i){
                if(prime[j]) prime[j]=false;
            }
        }
    }
    for(ll i=2; i<MAX; i++) if(prime[i]) v.push_back(i);
}

void output(ll n){
    ll max=1;
    for(auto it = v.rbegin(); it!=v.rend(); ++it){
        if(n%(*it)==0){
            if(max<*it) max=*it;
            while(n%(*it)==0){
                n/=(*it);
            }
        }
    }
    if(n>1) cout<<n<<endl;
    else cout<<max<<endl;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        output(n);
    }
}
