#include<iostream>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int process(int *a, int n){
    int c, count=0;
    do{
        c=0;
        for(int i=0; i<n; i++){
            if(a[i]!=0) c=1;
            if(a[i]%2){
                a[i]--;
                count++;
            }  
            a[i]/=2;
        }
        if(c) count++;
    } while(c);
    return count-1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a = new int [n];
        input(a,n);
        cout<<process(a,n)<<endl;
        delete []a;
    }
}