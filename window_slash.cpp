#include<iostream>
using namespace std;

void input(int a[100][100], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
}

void output(int a[100][100], int b[100][10], int n, int m){
    for(int i=0; i<n; i+=m){
        for(int j=0; j<n; j+=m){
            for(int k=0; k<m; k++){
                for(int g=0; g<m; g++){
                    a[i+k][j+g] *= b[k][g];
                }
            }
        }
    }

    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n, m;
    cin>>n;
    int a[100][100], b[10][10];
    input(a,n);
    cin>>m; 
    input(b,m);
    output(a,b,n,m);
}