#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    cin.ignore();
    set<string> a;
    while(t--){
        string b;
        getline(cin,b);
        a.insert(b);
    }
    cout<<a.size();
}