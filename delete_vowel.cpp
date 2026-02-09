#include<iostream>
#include<string>
using namespace std;

void to_lower(string &a){
    string b = "aeiouy";
    for(int i=0; i<a.length(); i++){
        a[i] = tolower(a[i]);
    }
    for(int i=0; i<a.length(); i++){
        if(b.find(a[i])!=string::npos){
            a.erase(i,1);
            i--;
        }
    }
    
}

int main(){
    string a; cin>>a;
    to_lower(a);
    for(int i=0; i<a.length(); i++){
        cout<<"."<<a[i];
    }
}