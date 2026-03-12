#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> v;
bool prime[100001];

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b,a%b);
}

void sieve(){
    fill(prime,prime+100001,true);
    for(int i=2; i*i<=100000; i++){
        if(prime[i]){
            for(int j=i*i; j<=100000; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<=100000; i++){
        if(prime[i]) v.push_back(i);
    }
}

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

void output(int *a, int n, int m){
    vector<int> b;
    b.push_back(1);
    for(int x:v){
        if(x>m) break;
        int c=1;
        for(int i=0; i<n; i++){
            if(a[i]%x==0){
                c=0;
                break;
            }
        }
        if(c) b.push_back(x);
    }
    for(int i=1; i<=m; i++){
        
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int *a = new int [n];
    input(a,n);
    output(a,n,m);
    delete []a;
}