#include<iostream>
using namespace std;

long long a[80];

void fibo(){
    a[0] =0;
    a[1] =1;
    for(int i=2; i<80; i++) a[i]=a[i-1]+a[i-2];
}

void input(int v[], int n){
    for(int i=0; i<n; i++) cin>>v[i];
}

bool check(int n){
    for(int i=0; i<80; i++){
        if(n==a[i]) return true;
    }
    return false;
}

void output(int v[], int n){
    for(int i=0; i<n; i++){
        if(check(v[i])) cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    fibo();
    int t; cin>>t;
    while(t--){
        int v[1000],n;
        cin>>n;
        input(v,n);
        output(v,n);
    }
}