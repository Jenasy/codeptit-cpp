#include<iostream>
#include<string>
using namespace std;

int sum(string a){
    int n = 0;
    for(int i=0; i<a.length(); i++){
        if(48 <= a[i] && a[i] <= 57){
            int k = a[i] - '0', j;
            for(j = i+1; j<a.length(); j++){
                if(a[j]<48 || a[j]>57) break;
                k = k*10 + (a[j] -'0');
            }
            i = j;
            n += k;
        }
    }
    return n;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a;
        cin>>a;
        cout<<sum(a)<<endl;
    }
}