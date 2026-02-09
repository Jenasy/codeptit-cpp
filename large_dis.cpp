#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> v, int n){
    while(n--){
        int a; cin>>a;
        v.push_back(a);
    }
}

int output(vector<int> v, int n){
    int dis=0;
    int l=0, r=n-1;
    while(l<=r){
        if(v[l]<=v[r]){
            int temp=r-l;
            if(temp>dis) dis=temp;
        }
        if(v[l+1]<=v[r]||v[l]<=v[r-1]){
            int temp=r-l-1;
            if(temp>dis) dis=temp;
        }
        l++;
        r--;
    }
    return dis;
}



int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        input(v,n);
        cout<<output(v,n)<<endl;
    }
}