#include<iostream>
#include<string>
using namespace std;

int count(string a){
    int c=0;
    for(int i=0; i<a.length(); i++){
        for(int j=i+1; j<a.length(); j++){
            if(a[i]==a[j]) c++;
        }
    }
    return a.length() + c;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        cout<<count(a)<<endl;
    }
}