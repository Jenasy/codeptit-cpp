#include<iostream>
using namespace std;

void input(int a[1000][3], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

int check(int a[1000][3], int n, int m){
    int c=0;
    for(int i=0; i<n; i++){
        int s=0;
        for(int j=0; j<m; j++){
            if(a[i][j]==1) s++;
        }
        if(s>1) c++;
    }
    return c;
}

int main(){
    int a[1000][3], n;
    cin>>n;
    input(a,n,3);
    cout<<check(a,n,3);
}