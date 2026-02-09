#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, x, i=0, c=0;
        cin>>n>>x;
        while(n--){
            int a; cin>>a;
            if(c) continue;
            if(a==x) c=1;
            i++;
        }
        if(c) cout<<i<<endl;
        else cout<<-1<<endl;
    }
}