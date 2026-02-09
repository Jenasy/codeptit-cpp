#include<iostream>
using namespace std;

void input(int a[100][100], int n, int m){
    int b[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
            if(b[i][j]){
                for(int k=0; k<n; k++){
                    a[k][j]=1;
                }
                for(int k=0; k<m; k++){
                    a[i][k]=1;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!=1) a[i][j]=0;
        }
    }
}

void output(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100][100], n,m;
        cin>>n>>m;
        input(a,n,m);
        output(a,n,m);
    }
}