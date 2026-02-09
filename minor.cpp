#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

int output(int a[], int n){
    int dis=-1;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                if(a[j]-a[i]>dis) dis=a[j]-a[i];
            }
        }
    }
    return dis;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[1000],n;
        cin>>n;
        input(a,n);
        cout<<output(a,n)<<endl;
    }
}