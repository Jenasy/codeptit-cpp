#include<iostream>
using namespace std;

void input(int a[50][50], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

long long linear(int a[50][50], int b[50][50], int n, int m, int p){
    long long sum=0;
    for(int i=0; i<m; i++){
        sum += (a[n][i]*b[i][p]);
    }
    return sum;
}

void multi(int a[50][50], int b[50][50], int n, int m, int p){
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout<<linear(a,b,i,m,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[50][50], b[50][50],n,m,p;
    cin>>n>>m>>p;
    input(a,n,m); input(b,m,p);
    multi(a,b,n,m,p);
}