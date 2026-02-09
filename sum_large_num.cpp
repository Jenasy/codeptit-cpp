#include<iostream>
#include<string>
using namespace std;

void reverse(string &a){
    int i = 0, j = a.length() -1;
    while(i<j){
        swap(a[i++],a[j--]);
    }
}

string sum(string a, string b){
    int i=a.length()-1, j=b.length()-1, temp = 0;
    string k="";
    while(i>=0 || j>= 0 || temp){
        int m = (i>=0)? a[i--]-'0': 0;
        int n = (j>=0)? b[j--]-'0': 0;
        int s = m + n + temp;
        temp = s/10;
        k += to_string(s%10);
    }
    reverse(k);
    return k;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }
}