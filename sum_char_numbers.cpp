#include<iostream>
using namespace std;

int one(int n){
    if(n<10) return n;
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return one(sum);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<one(n)<<endl;
    }
}