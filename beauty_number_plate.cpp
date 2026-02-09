#include<iostream>
#include<string>
using namespace std;

bool check_increase(string a){
    for(int i=0; i< a.length()-1; i++){
        if(a[i]-'0' >= a[i+1]-'0') return false;
    }
    return true;
}

bool check_only_number(string a){
    for(int i=1; i<a.length(); i++){
        if(a[i] != a[0]) return false;
    }
    return true;
}

bool check_full_house(string a){
    if(a[4] != a[3]) return false;
    if(a[1] != a[2] || a[0] != a[1]) return false;
    return true;
}

bool check_only_68(string a){
    for(int i=0; i<a.length(); i++){
        if(a[i]!='6' && a[i]!='8') return false;
    }
    return true;
}

bool check(string a){
    a.erase(0,5);
    a.erase(3,1);
    if(check_increase(a)) return true;
    if(check_only_number(a)) return true;
    if(check_full_house(a)) return true;
    if(check_only_68(a)) return true;
    return false;
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin>>ws,a);
        cout<<((check(a))?"YES":"NO")<<endl;
    }
}