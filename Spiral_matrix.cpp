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
    int top=0, left=0, right = m-1, bottom =n-1, k=0;
    while(left<=right && top<=bottom){
        //run in top
        for(int i=left; i<=right; i++) cout<<a[top][i]<<" ";
        top++;
        //run in right
        for(int i=top; i<=bottom; i++) cout<<a[i][right]<<" ";
        right--;
        if(top<=bottom){
            for(int i=right; i>= left; i--) cout<<a[bottom][i]<<" ";
            bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--) cout<<a[i][left]<<" ";
            left++;
        }
    }
    cout<<endl;
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