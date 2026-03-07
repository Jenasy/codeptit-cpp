#include<iostream>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

long long msum(int *a, int n){
    long long *b = new long long [n];
    b[0] = a[0]; b[1] = max(a[1],a[0]);
    for(int i=2; i<n; i++){
        b[i] = max(b[i-1],b[i-2]+a[i]);
    }
    return b[n-1];
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a = new int [n];
        input(a,n);
        cout<<msum(a,n)<<endl;
        delete []a;
    }
}