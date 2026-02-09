#include<iostream>
#include<vector>
#define MAX 100000
using namespace std;

vector<int>prime;
bool is_prime[MAX];

void sieve(){
    fill(is_prime,is_prime+MAX,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2; i*i<MAX; i++){
        if(is_prime[i]) for(int j=i*i; j<=MAX; j+=i){
            is_prime[j] = false;
        }
    }
    for(int i=2; i<MAX; i++) if(is_prime) prime.push_back(i);
}

int check(int n){
    int c=0;
    while(n%2==0){
        c++;
        n/=2;
    }
    int d=1;
    for(int i:prime){
        if((long long) i*i>n) break;
        int count=0;
        while(n%i==0){
            count++;
            n/=i;
        }
        d*=count+1;
    }
    if(n>1) d*=2;
    return d*c;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<check(n)<<endl;
    }
}