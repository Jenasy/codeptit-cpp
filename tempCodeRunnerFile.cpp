#include<iostream>
#include<string>
using namespace std;

int c=0;

void min(string &a, int m, int s, int &k){
    if(k) return;
    if(s<0 || a.length()>m) return;
    else if(s==0 && a.length() == m){
        k=1;
    }
    for(int i=0; i<= 9; i++){
        a.push_back(i+'0');
        min(a,m,s-i,k);
        a.pop_back();
    }
}

void max(string &a, int m, int s, int &k){
    if(k) return;
    if(s<0 || a.length()>m) return;
    else if(s==0 && a.length() == m){
        k=1;
    }
    for(int i=9; i >= 0; i--){
        a.push_back(i+'0');
        max(a,m,s-i,k);
        a.pop_back();
    }
}

int main(){
    int m, s;
    cin>>m>>s;
    string a,b;
    a="1";
    b="";
    min(a,m,s-1,c);
    cout<<a<<" ";
    if(c == 0){
        cout<<"-1 -1"<<endl;
        return 1;
    }
    c=0;
    max(b,m,s,c);
    cout<<b;
}