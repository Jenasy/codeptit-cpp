#include<iostream>
using namespace std;

void change(int a[100][100], int n, int m, int row, int col){
    if(row<0 || col<0 || row>=n || col>=m) return;
    if(a[row][col]==0) return;
    a[row][col]=0;
    for(int i=row-1; i<=row+1; i++){
        for(int j=col-1; j<=col+1; j++){
            if(i<0||i>=n||j<0||j>=m) continue;
            if(a[i][j]==1) change(a,n,m,i,j);
        }
    }
}

void input(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

void output(int a[100][100], int n, int m){
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                change(a,n,m,i,j);
                k++;
            }
        }
    }
    cout<<k<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100][100],n,m;
        cin>>n>>m;
        input(a,n,m);
        output(a,n,m);
    }
}