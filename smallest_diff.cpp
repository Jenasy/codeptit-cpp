#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void qs(int a[], int l, int r){
    if(l>r) return;
    int mid = a[(r+l)/2];
    int i=l,j=r;
    while(i<=j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(a,i,r);
    qs(a,l,j);
}

int dis(int a[], int n){
    int c=1e9;
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]<c){
            c=a[i+1]-a[i];
        }
    }
    return c;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100000], n;
        cin>>n;
        input(a,n);
        qs(a,0,n-1);
        cout<<dis(a,n)<<endl;
    }
}