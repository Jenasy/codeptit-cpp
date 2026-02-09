#include<iostream>
#define MAX 1000
using namespace std;

int a[1000000];

void sieve(int a[]){
    fill(a,a+MAX,0);
    for(int i=2; i*i<MAX; i++){
        if(!a[i]) {
            for(int j=i*i; j<MAX; j+=i){
                if(!a[j]) a[j]=i;
            }
        }
    }
}

int main(){
    sieve(a);
    int n,m; cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=n+1; i<m ; i++){
        if(!a[i]) cout<<i<<" ";
    }
}
