#include<iostream>
using namespace std;

long long output(int x, int y, int p){
    if(y==1) return x%p;
    return (x%p) * (output(x,y-1,p) % p);
}

int main(){
    int t; cin>>t;
    while(t--){
        int x,y,p;
        cin>>x>>y>>p;
        cout<<output(x,y,p)%p<<endl;
    }
}