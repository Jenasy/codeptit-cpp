#include<iostream>
#include<cmath>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++) cin>>p[i];
}

void qs(int *p, int l, int r){
    if(l>=r) return;
    int i=l,j=r,mid=p[(l+r)/2];
    while(i<=j){
        while(p[i]<mid) i++;
        while(p[j]>mid) j--;
        if(i<=j) swap(p[i++],p[j--]);
    }
    qs(p,i,r);
    qs(p,l,j);
}

long long output(int *p, int n){
    long long sum = 0;
    int k = 1-n;
    for(int i = 0; i<n; i++){
        sum += 1LL*p[i]*k;
        k+=2;
    }
    return sum;
}

int main(){
    int n; cin>>n;
    int *p = new int [n];
    input(p,n);
    qs(p,0,n-1);
    cout<<output(p,n);

}