#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void reverse(string s){
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss>>word){
        v.push_back(word);
    }
    for(vector<string>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        
        string s;
        getline(cin,s);
        reverse(s);
    }
}