#include<iostream>
using namespace std;

void input(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

void output(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        if(i%2){
            for(int j=m-1; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=0; j<m; j++){
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100][100],n;
        cin>>n;
        input(a,n,n);
        output(a,n,n);
    }
}