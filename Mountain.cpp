#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

bool check(int a[], int l, int r){
    int c=0;
    for(int i=l; i<r; i++){
        if(c){
            if(a[i]<a[i+1]) return false;
        }
        if(a[i]>a[i+1]) c=1;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[1000], n;
        cin>>n;
        input(a,n);
        int l,r;
        cin>>l>>r;
        cout<<(check(a,l,r)?"Yes":"No")<<endl;
    }
}