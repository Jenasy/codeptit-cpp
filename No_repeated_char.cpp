#include<iostream>
#include<string>
using namespace std;

void output(string a){
    for(int i=0; i<a.length(); i++){
        int c=0;
        if(a[i]!='0') for(int j=i+1; j<a.length(); j++){
            if(a[i]==a[j]){
                c=1;
                a[j]='0';
            }
        }
        if(c) a[i] = '0';
    }
    for(int i=0; i<a.length(); i++){
        if(a[i]!='0') cout<<a[i];
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        output(a);
    }
}