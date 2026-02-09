#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, first=0;
        set<int> s;
        cin>>n;
        for(int i=0; i<n; i++){
            int c; cin>>c;
            if(first) continue;
            if(s.find(c)!=s.end()){
                first=c;
            }
            s.insert(c);
        }
        if(first) cout<<first<<endl;
        else cout<<-1<<endl;
    }
}