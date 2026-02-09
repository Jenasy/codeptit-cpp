#include<iostream>
using namespace std;

int a[1000000];

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void output(int a[], int n, int d){
    for(int i=d; i<n; i++) cout<<a[i]<<" ";
    for(int i=0; i<d; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        input(a,n);
        output(a,n,d);
    }
}