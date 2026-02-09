#include<iostream>
#include<string>
using namespace std;

void output(string a){
    string b="";
    for(int i=0; i<a.length(); i++){
        int count = 1;
        b+=a[i];
        while(a[i]==a[i+1]){
            count++;
            a.erase(i,1);
        }
        b+= (count + '0');
    }
    cout<<b<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        output(a);
    }
}