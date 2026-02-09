#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int c=0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a==x) c++;
        }
        if(c) cout<<c<<endl;
        else cout<<-1<<endl;
    }
}