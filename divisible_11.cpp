#include<iostream>
#include<string>
using namespace std;

int to_int(string a){
    int n=0;
    for(int i=0; i<a.length(); i++){
        n = n*10 + (a[i]-'0');
    }
    return n%11;
}

bool check(string a){
    int sum = 0;
    for(int i=0; i<a.length(); i++){
        if(i%2) sum += (a[i]-'0');
        else sum -= (a[i]-'0');
    }
    return !(sum%11);
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        cout<<check(a)<<endl;
    }
}