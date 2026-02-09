#include<iostream>
#define MAX 10000
using namespace std;

int a[10000];

void sieve(int a[]){
    fill(a,a+MAX,0);
    a[0]=a[1]=1;
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
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        for(int i=n; i<=m; i++){
            if(!a[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
}
