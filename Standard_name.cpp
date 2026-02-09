#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<set>
using namespace std;

set<string> s;

void standard(string &a){
    for(int i=0; i<a.length(); i++){
        a[i] = tolower(a[i]);
    }
}

int count(int n){
    if(n<10) return 1;
    return 1+count(n/10);
}

void output(string a){
    vector<string> v;
    stringstream ss(a);
    string word;
    while(ss >> word){
        standard(word);
        v.push_back(word);
    }
    word = *v.rbegin();
    for(int i=0; i<v.size()-1; i++){
        word.push_back(v[i][0]);
    }
    int i = 2, k=word.length();
    while(s.find(word) != s.end()){
        word.append(to_string(i));
        if(s.find(word) == s.end()) break;
        word.erase(k,count(i));
        i++;
    }
    s.insert(word);
    cout<<word<<"@ptit.edu.vn"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a;
        getline(cin>>ws,a);
        output(a);
    }
}