#include<iostream>
#include<set>
using namespace std;

int input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
    int count = 1;
    int *b = new int [n];
    b[0] = 1;
    for(int i=1; i<n; i++){
        int k=1;
        for(int j=i-1; j>=0; j--){
            if(a[i]>a[j]) k = max(b[j]+1,k);
        }
        b[i] = k;
    }
    for(int i=0; i<n; i++) count = max(count, b[i]);
    delete []b;
    return count;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a = new int [n];
        cout<<input(a,n)<<endl;
        delete []a;
    }
}