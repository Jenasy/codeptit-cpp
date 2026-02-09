#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, c=0; cin>>n;
        set<int> s,v;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(s.find(a)!=s.end()) v.insert(a);
            else s.insert(a);
        }
        cout<<n-s.size()+v.size()<<endl;
    }
}