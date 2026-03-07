#include<iostream>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

void output(int *a, int n, int k){
    int l=0, r=k-1, sum=0, current=0;
    for(int i=0; i<k; i++) sum+=a[i];
    current = sum;
    int j=0;
    for(int i=k; i<n; i++){
        current+=a[i];
        current-=a[j++];
        if(current>sum){
            sum = current;
            l=j; r=i;
        }
    }
    for(int i=l; i<=r; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *a = new int [n];
        input(a,n);
        output(a,n,k);
        delete []a;
    }
}