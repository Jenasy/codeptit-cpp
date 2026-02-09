#include<iostream>
using namespace std;

bool check(string a){
    int i=0, j=a.length()-1;
    int c=0;
    while(i<=j){
        if(c>1) break;
        if(a[i]!=a[j]) c++;
        i++; j--;
    }
    if(c>1) return false;
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        int c=0;
        for(int i=n; i<=m; i++){
            if(check(to_string(i))) c++;
        }
        cout<<c<<endl;
    }
}