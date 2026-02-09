#include<iostream>
#include<string>
using namespace std;

void check(string a){
    if(a[0]=='0'){
        cout<<"INVALID"<<endl;
        return;
    }
    int b[58] = {0}, c=1;
    for(int i=0; i<a.length(); i++){
        if(48 <= a[i] && a[i] <= 57) b[a[i]]++;
        else{
            c=-1;
            break;
        }
    }
    if(c==-1) {
        cout<<"INVALID"<<endl;
        return;
    }
    for(int i=48; i<=57; i++){
        if(!b[i]){
            c=0;
            break;
        }
    }
    if(c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin>>ws,a);
        check(a);
    }
}