#include<iostream>
#include<cmath>
using namespace std;

bool check(int n){
    int c=0;
    while(n){
        if(n%2) c++;
        else c--;
        n/=10;
    }
    if(c==0) return true;
    return false;
}

int main(){
    int n,c=0; cin>>n;
    for(int i=pow(10,n-1); i<pow(10,n); i++){
        if(check(i)){
            cout<<i<<" ";
            c++;
        }
        if(c%10==0) cout<<endl;
    }
}