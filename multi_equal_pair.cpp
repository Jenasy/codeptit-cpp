#include<iostream>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

void output(int *a, int n){
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i] == 0) c++;
        else{
            if(a[i] == a[i+1]){
                cout<<a[i]*2<<" ";
                a[i+1] = 0;
            }
            else cout<<a[i]<<" ";
        }
    }
    for(int i=0; i<c; i++){
        cout<<0<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a = new int [n];
        input(a,n);
        output(a,n);
    }
}