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

void input(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    qs(v,0,n-1);
}

void output(vector<int> v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n,m; cin>>n>>m;
        input(v,n*m);
        output(v,n*m);
    }
}