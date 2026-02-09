#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int> a,b,c;
        for(int i=0; i<n; i++){
            int k; cin>>k;
            a.insert(k);
            c.insert(k);
        }
        for(int j=0; j<m; j++){
            int k; cin>>k;
            b.insert(k);
            c.insert(k);
        }
        for(int x:c) cout<<x<<" ";
        cout<<endl;
        for(int x:a){
            if(b.find(x)!=b.end()) cout<<x<<" ";
        }
        cout<<endl;
    }
}