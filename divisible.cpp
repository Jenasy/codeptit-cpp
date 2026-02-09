#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int m,n,a,b;
        cin>>n>>m>>a>>b;
        int c=0;
        for(int i=n; i<=m; i++){
            if(i%a==0 || i%b==0) c++;
        }
        cout<<c<<endl;
    }
}