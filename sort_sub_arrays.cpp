#include<iostream>
#include<set>
#include<vector>
using namespace std;

void qs(int *a, int l, int r){
    if(l>=r) return;
    int mid = a[(l+r)/2];
    int i=l, j=r;
    while(i<=j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++; j--;
        }
    }
    qs(a,i,r); qs(a,l,j);
}

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, d, c; cin>>n;
        vector<int> v(n), a(n);
        input(&v[0],n);
        a = v;
        qs(&a[0],0,n-1);
        for(int i=0; i<n; i++){
            if(a[i] != v[i]){
                 d = i;
                 break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] != v[i]){
                c=i;
                break;
            }
        }
        cout<<d+1<<" "<<c+1<<endl;
    }
}