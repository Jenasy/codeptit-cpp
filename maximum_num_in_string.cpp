#include<iostream>
#include<string>
using namespace std;

int compare(string a, string b){
    if(a.length()>b.length()) return 1;
    else if(a.length()<b.length()) return -1;
    for(int i=0; i<a.length(); i++){
        if(a[i]-'0'>b[i]-'0') return 1;
        else if(a[i]-'0'<b[i]-'0') return -1;
    }
    return 0;
}

void output(string a){
    string max="";
    for(int i=0; i<a.length(); i++){
        if(48<=a[i] && a[i]<= 57){
            string b;
            b.push_back(a[i]);
            for(int j=i+1; j<a.length(); j++){
                if(a[j]<48 || a[j]>57) break;
                b.push_back(a[j]);
            }
            if(compare(max,b)<0) max = b; 
        }
    }
    cout<<max<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        output(a);
    }
}