#include<iostream>
using namespace std;

void input(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
}

int count(int a[100][100], int n, int m){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(!a[0][i]) continue;
        for(int j=i+1; j<n; j++){
            if(a[0][i]==a[0][j]){
                a[0][j]=0;
            }
        }

        int c;
        for(int j=1; j<n; j++){
            c=0;
            for(int k=0; k<m; k++){
                if(a[0][i]==a[j][k]){
                    c=1;
                    break;
                }
            }
            if(!c) break;
        }
        if(c) cnt++;
    }
    return cnt;
}


int main(){
    int t; cin>>t;
    while(t--){
        int a[100][100], n;
        cin>>n;
        input(a,n,n);
        cout<<count(a,n,n)<<endl;
    }
}