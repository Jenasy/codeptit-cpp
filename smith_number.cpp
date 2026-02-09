#include<iostream>
#include<vector>
#define MAX 100001
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

bool find(int n){
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(n==*it) return true;
    }
    return false;
}

int sum_char(int n){
    if(n<10) return n;
    return sum_char(n/10)+n%10;
}

bool check(int n){
    int a=n, sum=0;
    if(find(n)) return false;
    vector<int> divisor;
    for(int x:v){
        if(x*x>n) break;
        while(n%x==0){
            divisor.push_back(x);
            n/=x;
        }
    }
    if(n>1) divisor.push_back(n);
    for(int x:divisor){
        sum+=sum_char(x);
    }
    return (sum_char(a)==sum)?true:false;
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<(check(n)?"YES":"NO")<<endl;
    }
}