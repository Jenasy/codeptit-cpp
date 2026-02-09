#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void qs(int *a, int l, int r){
    if(l>=r) return;
    int mid = *(a + (l+r)/2);
    int i=l, j=r;
    while(i<=j){
        while(*(a+i)<mid) i++;
        while(*(a+j)>mid) j--;
        if(i<=j){
            swap(*(a+i), *(a+j));
            i++;
            j--;
        }
    }
    if(i<r) qs(a,i,r); 
    if(l<j) qs(a,l,j);
}

void input(vector<int> &v, int n){
    for(int i=0; i<n; i++) cin>>v[i];
}

void output(const vector<int> &v, int n){
    int i=0, j=v.size()-1, sum=1e9;
    while(i<j){
        int k=v[i]+v[j];
        if(abs(k)<abs(sum)) sum = k;
        if(k<0) i++;
        else if(k>0) j--;
        else break;
        
    }
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        input(v,n);
        sort(v.begin(), v.end());
        output(v,n);
    }
}