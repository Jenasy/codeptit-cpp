#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, max=0; cin>>n;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a>max) max=a;
        }
        cout<<max<<endl;
    }
}