#include<iostream>
#include<climits>
using namespace std;

long long input(int *a, int n){
    long long sum=LLONG_MIN;
    long long current = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        current += a[i];
        sum = max(sum,current);
        if(current<0) current = 0;
    }
    return sum;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a = new int [n];
        long long sum = input(a,n);
        cout<<sum<<endl;
        delete []a;
    }
}