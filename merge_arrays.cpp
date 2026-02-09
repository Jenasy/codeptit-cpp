#include<iostream>
#include<vector>
using namespace std;

void qs(vector<int> &v, int l, int r){
    if(l>=r) return;
    int mid = v[(l+r)/2];
    int i=l, j=r;
    while(i<=j){
        while(v[i]<mid) i++;
        while(v[j]>mid) j--;
        if(i<=j){
            swap(v[i],v[j]);
            i++; j--;
        }
    }
    qs(v,i,r); qs(v,l,j);
}

void input(vector<int> &a, int n){
    for(int i=0; i<n; i++){
        int b; cin>>b;
        a.push_back(b);
    }
    qs(a,0,n-1);
}

void output(vector<int> a, vector<int> b, int n, int m){
    int i=0, j=0;
    while(i<n || j<m){
        if(i>=n){
            cout<<b[j]<<" ";
            j++;
            continue;
        }
        if(j>=m){
            cout<<a[i]<<" ";
            i++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> a,b;
        int n,m;
        cin>>n>>m;
        input(a,n); input(b,m);
        output(a,b,n,m);
    }
}