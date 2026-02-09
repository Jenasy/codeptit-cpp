#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &v, int n){
    while(n--){
        int a; cin>>a;
        v.push_back(a);
    }
}

void qs(vector<int> &v, int l, int r){
    if(l>r) return;
    int mid = v[(l+r)/2];
    int i=l, j=r;
    while(i<=j){
        while(v[i]<mid) i++;
        while(v[j]>mid) j--;
        if(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    qs(v,l,j);
    qs(v,i,r);
}

bool binary_search(const vector<int> &v, int l, int r, int x){
    if(l>r) return false;
    int mid = (r+l)/2;
    if(v[mid] == x) return true;
    else if(v[mid] < x) return binary_search(v,mid+1,r,x);
    else return binary_search(v,l,mid-1,x);
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n,x; 
        cin>>n>>x;
        input(v,n);
        qs(v,0,n-1);
        cout<<(binary_search(v,0,n-1,x)?1:-1)<<endl;
    }
}