#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; cin>>s;
        int n, a[123]={0}; cin>>n;
        for(int i=0; i<s.length(); i++){
            a[s[i]]=1;
        }
        int count=0;
        for(int i=97; i<=122; i++){
            if(!a[i]) count++;
        }
        cout<<(count<=n)<<endl;
    }
}