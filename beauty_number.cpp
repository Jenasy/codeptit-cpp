#include<iostream>
#include<string>
using namespace std;

bool check(string a){
    int i=0, j=a.length()-1;
    while(i<=j){
        if(a[i]!=a[j]) return false;
        int c = a[i]-'0';
        if(c%2) return false;
        i++; j--;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        cout<<(check(a)?"YES":"NO")<<endl;
    }
}