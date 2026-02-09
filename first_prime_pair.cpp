#include<iostream>
#define MAX 1000000
using namespace std;

int a[MAX];

void sieve(int a[]){
    fill(a,a+MAX,0);
    a[0]=a[1]=1;
    for(int i=2; i*i<=MAX; i++){
        if(!a[i]) {
            for(int j=i*i; j<=MAX; j+=i){
                if(!a[j]) a[j]=1;
            }
        }
    }
}

int main(){
    sieve(a);
    int t; cin>>t;
    while(t--){
        int n, c=0; cin>>n;
        for(int i=2; i<n; i++){
            if(!a[i] && !a[n-i]){
                cout<<i<<" "<<n-i<<endl;
                c=1;
                break;
            }
        }
        if(!c) cout<<-1<<endl;
    }
}