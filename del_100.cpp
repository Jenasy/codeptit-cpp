#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; cin>>s;
        int l=0;
        while(s.find("100")!=string::npos){
            int p=s.find("100");
            s.erase(p,3);
            l+=3;
        }
        cout<<l<<endl;
    }
}