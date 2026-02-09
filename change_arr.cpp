#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++){
        cin>>*(p+i);
    }
}

int count(int *p, int n){
    int l=0, r=n-1, c=0;
    while(l<r){
        if(*(p+l)==*(p+r)){
            l++; r--;
        }
        else if(*(p+l)<*(p+r)){
            *(p+l+1)+=*(p+l);
            l++;
            c++;
        }
        else {
            *(p+r-1)+=*(p+r);
            r--;
            c++;
        }
    }
    return c;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *p = new int [n];
        input(p,n);
        cout<<count(p,n)<<endl;
    }
}