#include<iostream>
using namespace std;

void input(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

void rotate(int a[100][100], int n, int m, int i, int k){
    if(n<i) return;
    int right = m, bottom = n, left = k, top = i;
    int temp = a[top][left];
    while(left<m){
        swap(temp,a[i][left+1]);
        left++;
    }
    while(top<n){
        swap(temp,a[top+1][m]);
        top++;
    }
    while(right>k){
        swap(temp,a[n][right-1]);
        right--;
    }
    while(bottom>i){
        swap(temp,a[bottom-1][k]);
        bottom--;
    }
    rotate(a,n-1,m-1,i+1,k+1);
}

void output(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[100][100], n, m;
        cin>>n>>m;
        input(a,n,m);
        rotate(a,n-1,m-1,0,0);
        output(a,n,m);
    }
}