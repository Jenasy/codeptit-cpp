#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++){
        cin>>*(p+i);
    }
}

void output(int *p, int n){
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(j-i<max) break;
            if(*(p+i)<*(p+j)){
                if(j-i>max) max = j-i;
            }
        }
    }
    cout<<max<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *p = new int [n];
        input(p,n);
        output(p,n);
    }
}