#include<iostream>
#include<vector>
#include<string>
using namespace std;

string a[10] = {"","","2","3","322","5","53","7","7222","7332"};

void output(string b){
    string c = "";
    for(int i=0; i<b.length(); i++){
        c.append(a[b[i]-'0']);
    }
    int arr[10]={0};
    for(int i=0; i<c.length(); i++){
        arr[c[i]-'0']++;
    }
    for(int i=9; i>=2; i--){
        while(arr[i]--) cout<<i;
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string b; cin>>b;
        output(b);
    }
}