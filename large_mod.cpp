#include<iostream>
#include<string>
using namespace std;

long long to_num(string a){
    long long n = 0;
    for(int i=0; i<a.length(); i++){
        n = n*10 + (a[i]-'0');
    }
    return n;
}

int compare(string n, string m){
    if(n.length()>m.length()) return 1;
    else if(n.length()<m.length()) return -1;
    for(int i=0; i<n.length(); i++){
        if(n[i] - '0' > m[i] - '0') return 1;
        else if(n[i] - '0' < m[i] - '0') return -1;
    }
    return 0;
}

void output(string n, string m){
    while(compare(n,m) != -1){
        string k="";
        k.assign(n,0,m.length()+1);
        n.erase(0,m.length()+1);
        n.insert(0,to_string(to_num(k)%to_num(m)));
    }
    if(compare(n,m)==0) cout<<0<<endl;
    else cout<<to_string(to_num(n)%to_num(m))<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string n,m;
        cin>>n>>m;
        output(n,m);
    }
}