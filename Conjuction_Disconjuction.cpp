#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a[100001]={0}, n,m;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            int c; cin>>c;
            a[c]++;
        }
        for(int i=0; i<m; i++){
            int c; cin>>c;
            a[c]++;
        }
        for(int i=0; i<=1e5; i++){
            if(a[i]) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0; i<=1e5; i++){
            if(a[i]==2) cout<<i<<" ";
        }
        cout<<endl;
    }
}