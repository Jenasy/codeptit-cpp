#include<iostream>
using namespace std;

bool check(long long n){
    int a=n,b=0;
    while(n){
        b=b*10+n%10;
        n/=10;
    }
    return a==b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<(check(n)?"YES":"NO");
        cout<<endl;
    }
}