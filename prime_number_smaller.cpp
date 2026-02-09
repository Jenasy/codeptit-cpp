#include<iostream>
#include<vector>
#define MAX 10001
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

void output(int n){
    for(auto it = v.begin(); it!=v.end(); it++){
        if(*it>n) break;
        cout<<*it<<" ";
    }
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
