#include<iostream>
#include<string>
using namespace std;

int sum(string a){
    int n=0;
    for(int i=0; i<a.length(); i++){
        n+=a[i]-'0';
    }
    return n;
}

bool check(string a){
    if(a.length()<2){
        if(a == "9") return true;
        return false;
    }
    return check(to_string(sum(a)));
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin>>ws, a);
        cout<<check(a)<<endl;
    }
}