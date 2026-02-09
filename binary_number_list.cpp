#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++){
        cin>>*(p+i);
    }
}

void output(int *p, int *q, int n){
    int max = 0;
    for(int i=0; i<n; i++){
        int sum1 = *(p+i), sum2 = *(q+i);
        if(sum1==sum2 && max == 0) max =1;
        for(int j=i+1; j<n; j++){
            sum1+=*(p+j); sum2+=*(q+j);
            if(sum1==sum2) {
                if(j-i+1>max) max=j-i+1;
            }
        }
    }
    cout<<max<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *p = new int [n], *q = new int [n];
        input(p,n); input(q,n);
        output(p,q,n);
    }
}