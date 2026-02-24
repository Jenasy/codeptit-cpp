#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++) cin>>p[i];
}

void output(int *p, int n){
    for(int i=0; i<n; i++) cout<<p[i]<<" ";
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *p = new int [n], *a = new int [n];
        input(p,n);
        for(int i=0; i<n; i++){
            if(i == 0) a[i] = p[i] * p[i+1];
            else if(i == n-1) a[i] = p[i] * p[i-1];
            else a[i] = p[i-1] * p[i+1];
        }
        output(a,n);
        delete []p;
        delete []a;
    }
}