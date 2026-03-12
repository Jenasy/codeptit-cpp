#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> primes;
bool prime[10000001];

void sieve(){
    fill(prime,prime+10000001,true);
    prime[0] = prime[1] = false;
    for(int i=2; i*i <= 10000000; i++){
        if(prime[i]){
            for(int j=i*i; j<=10000000; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<=10000000; i++) {
        if(prime[i]) primes.push_back(i);
    }
}

void solve(long long n){
    map<long long,int> mp;
    for(int x:primes){
        if(x>n) break;
        while(n%x==0){
            mp[x]++;
            n/=x;
        }
    }
    if(n!=1) mp[n]++;
    for(pair<long long, int> x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        solve(n);
    }
}