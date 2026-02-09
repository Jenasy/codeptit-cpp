#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string a; getline(cin,a);
        set<int> s;
        for(int i=0; i<10; i++){
            if(a.find(to_string(i))!=string::npos) s.insert(i);
        }
        for(int x:s) cout<<x<<" ";
        cout<<endl;
    }
}