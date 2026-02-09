#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void chuanhoa(string &a, bool c=false){
    if(c){
        for(int i=0; i<a.length(); i++){
            if(a[i]<=122 && a[i]>= 97) a[i]-=32;
        }
    }
    else{
        a[0]=toupper(a[0]);
        for(int i=1; i<a.length(); i++){
            if(a[i]<=90 && a[i]>= 65) a[i]+=32;
        }
    }
}

int main(){
    string a, word; getline(cin,a);
    vector<string> v;
    stringstream ss(a);
    while(ss>>word){
        v.push_back(word);
    }
    for(int i=0; i<v.size(); i++){
        if(i!=v.size()-1){
            chuanhoa(v[i]);
            cout<<" "<<v[i];
        }
        else {
            chuanhoa(v[i],true);
            cout<<", "<<v[i];
        }
    }
}