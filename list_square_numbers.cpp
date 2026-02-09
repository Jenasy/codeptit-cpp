#include<iostream>
#include<vector>
#define MAX 1000001
#define ll long long
using namespace std;

bool prime[MAX];
vector<int> v;

void sieve(){
    fill(prime,prime+MAX,true);
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=MAX; i++){
        if(prime[i]) {
            for(int j=i*i; j<MAX; j+=i){
                if(prime[j]) prime[j]=false;
            }
        }
    }
    for(int i=2; i<MAX; i++) if(prime[i]) v.push_back(i);
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        int c=0;
        for(auto it=v.begin(); it!=v.end(); it++){
            ll a=*it;
            if(a*a<n) continue;
            if(a*a>m) break;
            c++;
        }
        cout<<c<<endl;
    }
}