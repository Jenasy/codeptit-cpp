#include<iostream>
using namespace std;

void input(bool a[], int n){
    while(n--){
        int c; cin>>c;
        if(c<0) continue;
        a[c]=true;
    }
}

int output(bool a[], int n){
    for(int i=1; i<=1000000; i++){
        if(!a[i]) return i;
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        bool a[1000001]={false};
        int n;
        cin>>n;
        input(a,n);
        cout<<output(a,n)<<endl;
    }
}