#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]={0};
        for(int i=0; i<n-1; i++){
            int b; cin>>b;
            a[b]++;
        }
        for(int i=1; i<=n; i++){
            if(!a[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
}