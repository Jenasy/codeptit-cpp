#include<iostream>
#include<cmath>
using namespace std;

bool check(long long a){
    int n=a%10; a/=10;
    while(a){
        if(abs(a%10-n)!=1) return false;
        n=a%10;
        a/=10;
    }
    return true;
}

int main(){
    int n; cin>>n;
    while(n--){
        long long a; cin>>a;
        cout<<(check(a)?"YES":"NO");
        cout<<endl;
    }
}