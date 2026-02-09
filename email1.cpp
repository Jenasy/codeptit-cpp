#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void lower(string &a){
    for(int i=0; i<a.length(); i++){
        if(65<=a[i] && a[i]<=90) a[i]+=32;
    }
}

void chuanhoa(string &a){
    stringstream ss(a);
    string word, xuat="";
    vector<string> v;
    while(ss>>word){
        lower(word);
        v.push_back(word);
    }
    for(int i=0; i<v.size(); i++){
        if(i==v.size()-1) xuat = v[i]+xuat;
        else xuat+=v[i][0];
    }
    cout<<xuat+"@ptit.edu.vn";
}

int main(){
    string a;
    getline(cin,a);
    chuanhoa(a);
}