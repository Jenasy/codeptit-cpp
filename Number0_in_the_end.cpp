#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        vector<long long> v;
        int n; cin>>n;
        for(int i=0; i<n; i++){
            long long a; cin>>a;
            if(a==0) continue;
            else v.push_back(a);
        }
        for(long long x:v) cout<<x<<" ";
        for(int i=0; i<n-v.size(); i++){
            cout<<0<<" ";
        }
        cout<<endl;
    }
}