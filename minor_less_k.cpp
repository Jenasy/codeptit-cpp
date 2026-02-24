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
            i++; j--;
        }
    }
    if(l<j) qs(p,l,j);
    if(i<r) qs(p,i,r);
}


long long count(int *p, int n, int k){
    long long total = 0;
    int i = 0;
    for (int j = 1; j < n; j++) {
        while (p[j] - p[i] >= k) {
            i++;
        }
        
        total += (j - i);
    }
    return total;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int *p = new int [n];
        input(p,n);
        qs(p,0,n-1);
        cout<<count(p,n,k)<<endl;
        delete []p;
    }
}