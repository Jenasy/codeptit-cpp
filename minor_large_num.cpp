#include<iostream>
#include<string>
using namespace std;

void reverse(string &a){
    int i=0, j = a.length()-1;
    while(i<j) swap(a[i++],a[j--]);
}

int compare(string a, string b){
    if(a.length()>b.length()) return 1;
    else if(a.length()<b.length()) return -1;
    else{
        for(int i=0; i<a.length(); i++){
            if(a[i]-'0'<b[i]-'0') return -1;
            else if(a[i]-'0'>b[i]-'0') return 1;
        }
        return 0;
    }
}

void minor(string a, string b){
    string m;
    int i=a.length()-1, j=b.length()-1, temp = 0;
    while(i>=0 || j>=0){
        int c = (i>=0)? a[i--]-'0' : 0;
        int d = (j>=0)? b[j--]-'0' : 0;
        int s = d - c - temp;
        if(s<0){
            s+=10;
            temp = 1;
        }
        else{
            temp = 0;
        }
        m.push_back(s+'0');
    }
    reverse(m);
    cout<<m<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(compare(a,b)>0) minor(b,a);
        else minor(a,b);
    }
}