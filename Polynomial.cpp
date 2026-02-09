#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

long long pow(int x, int n){
    long long sum=1;
    for(int i=0; i<n; i++){
        sum= sum*x%1000000007;
    }
    return sum%1000000007;
}

long long output(int a[], int n, int x){
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=a[n-i-1]*pow(x,i);
    }
    return sum%(1000000007);
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[2000],n,x;
        cin>>n>>x;
        input(a,n);
        cout<<output(a,n,x)<<endl;
    }
}