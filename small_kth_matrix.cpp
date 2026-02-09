#include<iostream>
using namespace std;

void qs(int a[], int l, int r){
    if(l>r) return;
    int mid=a[(r+l)/2];
    int i=l, j=r;
    while(i<=j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j) {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(a,i,r);
    qs(a,l,j);
}

void input(int a[], int n){
    for(int i=0; i<n*n; i++) cin>>a[i];
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[10000],n,k;
        cin>>n>>k;
        input(a,n);
        qs(a,0,n*n-1);
        cout<<a[k-1]<<endl;
    }
}