#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

int sum(int a[], int l, int r){
    int c=0;
    for(int i=l; i<=r; i++){
        c+=a[i];
    }
    return c;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[10000], n, q;
        cin>>n>>q;
        input(a,n);
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<sum(a,l-1,r-1)<<endl;
        }
    }
}