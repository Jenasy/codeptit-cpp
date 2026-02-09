#include<iostream>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void output(int a[], int n){
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(0<i && i<n-1 && 0<j && j<n-1){
                cout<<"  ";
                k++;
            } 
            else cout<<a[k++]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[10000],n;
        cin>>n;
        input(a,n*n);
        output(a,n);
    }
}