#include<iostream>
using namespace std;

void input(int *p, int n, int &m){
    for(int i=0; i<n; i++){
        cin>>*(p+i);
        m+=*(p+i);
    }
}

int output(int *p, int n, int m){
    int current_sum = *p;
    for(int i=1; i<n; i++){
        if(current_sum == m - current_sum - *(p+i)) return i+1;
        current_sum += *(p+i);
    }
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, max=0; cin>>n;
        int *p = new int [n];
        input(p,n,max);
        cout<<output(p,n,max)<<endl;
    }
}