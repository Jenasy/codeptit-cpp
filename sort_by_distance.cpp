#include<iostream>
#include<cmath>
using namespace std;

void bs(int **a, int n){
    for(int i=0; i<n; i++){
        int c = 1;
        for(int j=0; j<n-1; j++){
            if(a[j][1]>a[j+1][1]){
                swap(a[j][1],a[j+1][1]);
                swap(a[j][0],a[j+1][0]);
                c=0;
            }
        }
        if(c) break;
    }
}

void input(int **a, int n, int k){
    for(int i=0; i<n; i++){
        cin>>a[i][0];
        a[i][1] = abs(a[i][0]-k);
    }
    bs(a,n);
}

void output(int **a, int n, int k){
    for(int i=0; i<n; i++){
        cout<<a[i][k]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int **a = new int * [n];
        for(int i=0; i<n; i++){
            a[i] = new int [2];
        }
        input(a,n,k);
        output(a,n,0);
    }
}