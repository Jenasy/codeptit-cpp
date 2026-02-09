#include<iostream>
#define MAX 10000
using namespace std;

void sieve(int a[]){
    for(int i=2; i<MAX; i++){
        if(!a[i]) {
            a[i]=i;
            for(int j=i*i; j<MAX; j+=i){
                if(!a[j]) a[j]=i;
            }
        }
    }
}

int check(int n, const int a[]){
    int c=0,d=3;
    while(n!=1){
        int i=a[n];
        c++;
        while(n%i==0){
            n/=i;
            d--;
        }
    }
    if(c==3 && d==0) return 1;
    return 0;
}

int main(){
    int a[MAX]={0};
    sieve(a);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<check(n,a)<<endl;
    }
}