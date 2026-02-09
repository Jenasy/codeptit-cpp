#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        set<long long> s;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            long long c; cin>>c;
            s.insert(c);
        }
        for(int i=0; i<n; i++){
            if(s.find(i)==s.end()) cout<<-1<<" ";
            else cout<<i<<" ";
        }
        cout<<endl;
    }
}