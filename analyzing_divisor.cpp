#include<iostream>
#include<vector>
#define MAX 100001
#define ll long long
using namespace std;

bool prime[MAX];
vector<int> v;

void sieve(){
    fill(prime,prime+MAX,true);
    for(int i=2; i*i<=MAX; i++){
        if(prime[i]) {
            for(int j=i*i; j<MAX; j+=i){
                if(prime[j]) prime[j]=false;
            }
        }
    }
    for(int i=2; i<MAX; i++) if(prime[i]) v.push_back(i);
}

void output(int n){
    for(int x:v){
        if(x*x>n) break;
        while(n%x==0){
            cout<<x<<" ";
            n/=x;
        }
    }
    if(n!=1) cout<<n;
    cout<<endl;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        output(n);
    }
}
