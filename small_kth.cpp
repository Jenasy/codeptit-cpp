#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++) cin>>p[i];
}

void qs(int *p, int l, int r){
    if(l>=r) return;
    int i=l, j=r, mid = p[(l+r)/2];
    while(i<=j){
        while(p[i]<mid) i++;
        while(p[j]>mid) j--;
        if(i<=j){
            swap(p[i],p[j]);
            i++;
            j--;
        }
    }
    qs(p,i,r); qs(p,l,j);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int *p = new int [n];
        input(p,n);
        qs(p,0,n-1);
        cout<<p[k-1]<<endl;
    }
}