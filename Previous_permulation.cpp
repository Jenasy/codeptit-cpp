#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &v, int n){
    for(int i=0; i<n; i++) cin>>v[i];
}

void output(vector<int> v, int n){
    vector<int> p(n);
    for(int i=0; i<n; i++) p[i] = i+1;
    while(p != v){
        
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        input(v,n);
        output(v,n);
    }
}