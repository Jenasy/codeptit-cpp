#include<iostream>
#include<vector>
using namespace std;

void qs(int *a, int l, int r){
    if(l>=r) return;
    int mid = *(a + (l+r)/2);
    int i=l, j=r;
    while(i<=j){
        while(*(a+i)<mid) i++;
        while(*(a+j)>mid) j--;
        if(i<=j){
            swap(*(a+i), *(a+j));
            i++;
            j--;
        }
    }
    qs(a,i,r); qs(a,l,j);
}

void input(int *a, int n){
    for(int i=0; i<n; i++){
        cin>>*(a+i);
    }
}

void output(int *a, int n){
    for(int i=0; i<n; i++) cout<<*(a+i)<<" ";
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        input(&v[0],n);
        qs(&v[0],0,n-1);
        int min1 = v[0], min2=1e9;
        for(int x:v) if(min1 != x){
            min2 = x;
            break;
        }
        if(min2 == 1e9) cout<<-1<<endl;
        else cout<<min1<<" "<<min2<<endl;
    }
}