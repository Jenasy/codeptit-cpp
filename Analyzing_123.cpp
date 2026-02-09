#include<iostream>
#include<string>
#define ll long long
using namespace std;

ll to_int(string a){
    ll temp=0;
    for(int i=0; i<a.length(); i++){
        temp = temp*10 + (a[i]-'0');
    }
    return temp;
}

ll find(ll n){
    string a = to_string(n), b="";
    int temp = 0;
    for(int i=0; i<a.length(); i++){
        if(temp){
            b+="3";
        }
        else {
            int k = a[i]-'0';
            if(k>3){
                b+="3";
            }
            else if(k==0){
                temp=1;
                b+="3";
                //j la chi so
                int j=i-1;
                while(j>0 && a[j]==1){
                    b[j]='3';
                    j--;
                }
                if( j==0 && b[j]=='1') b[j]='0';
                else if(b[j]==a[j]) b[j]--; 
            }
            else {
                b+=a[i];
            }
        }
    }
    return to_int(b);
}

int count(ll n){
    if(n<=0) return 0;
    ll temp = find(n);
    if(temp == n) return 1;
    return 1 + count(n-temp);
}

int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        cout<<count(n)<<endl;
    }
}
