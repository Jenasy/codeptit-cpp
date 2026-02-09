#include<iostream>
using namespace std;

void qs(int a[], int l, int r){
    if(l>=r) return;
    int i=l, j=r;
    int mid = a[(l+r)/2];
    while(i<=j){
        while(a[i]>mid) i++;
        while(a[j]<mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(a,l,j);
    qs(a,i,r);
}

void input(int a[], int n) {
    for(int i=0; i<n; i++) cin>>a[i];
}
void output(int a[], int n) {
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, k, a[1000];
        cin>>n>>k;
        input(a,n);
        qs(a,0,n-1);
        output(a,k);
    }
}