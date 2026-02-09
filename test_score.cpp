#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

float check(string s, string a){
    int p=0;
    for(int i=0; i<a.length(); i++){
        if(s[i*2]==a[i]) p++; 
    }
    return (float) p*10/15;
}

int main(){
    string a="ABBADCCABDCCABD", b="ACCABCDDBBCDDBB";
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; 
        getline(cin,s);
        if(n==101) cout<<fixed<<setprecision(2)<<check(s,a);
        else cout<<fixed<<setprecision(2)<<check(s,b);
        cout<<endl;
    }
}