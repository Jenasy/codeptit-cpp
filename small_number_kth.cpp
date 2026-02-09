#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void qs(int a[], int l, int r){
    if(l>r) return;
    int mid=a[(l+r)/2];
    int i=l, j=r;
    while(i<=j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(a,l,j);
    qs(a,i,r);
}

void output(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(i==k-1){
            cout<<a[i]<<endl;
            break;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100000], n, k;
        cin>>n>>k;
        input(a,n);
        qs(a,0,n-1);
        output(a,n,k);
    }
}