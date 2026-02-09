#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        int pos=a.find("084");
        a.erase(pos,3);
        cout<<a<<endl;
    }
}