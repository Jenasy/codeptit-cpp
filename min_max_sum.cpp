#include<iostream>
#include<string>
using namespace std;

long long to_number(string a){
    long long n=0;
    for(int i=0; i<a.length(); i++){
        n = n*10 + (a[i]-'0');
    }
    return n;
}

long long turn(string a, int n, int m){
    while(a.find(n+'0') != string::npos){
        int pos = a.find(n+'0');
        a[pos] = m+'0';
    }
    return to_number(a);
}

void output(string a, string b){
    long long min = turn(a,6,5) + turn(b,6,5);
    long long max = turn(a,5,6) + turn(b,5,6);
    cout<<min<<" "<<max<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a,b;
        cin>>a>>b;
        output(a,b);
    }
}