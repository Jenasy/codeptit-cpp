#include<iostream>
#include<map>
using namespace std;

void standard(string &s){
    for(int i=0; i<s.length(); i++){
        if('a'<=s[i]&&s[i]<='z') s[i]-=32;
    }
}

bool check(string s,map<char,int> mp){
    int i=0, j=s.length()-1;
    while(i<j){
        if(mp[s[i]] != mp[s[j]]) return false;
        i++; j--;
    }
    return true;
}

int main(){
    map<char,int> mp = {{'A',2},{'B',2},{'C',2},
    {'D',3},{'E',3},{'F',3},
    {'G',4},{'H',4},{'I',4},
    {'J',5},{'K',5},{'L',5},
    {'M',6},{'N',6},{'O',6},
    {'P',7},{'Q',7},{'R',7},{'S',7},
    {'T',8},{'U',8},{'V',8},
    {'W',9},{'X',9},{'Y',9},{'Z',9}};
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        standard(s);
        cout<<(check(s,mp)?"YES":"NO")<<endl;
    }
}