#include<iostream>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n; i++) cin>>a[i];
}
// 1 3 4 6 8 9 10
int binary_search(int *a, int l, int r, int x){
    if(l>r) return l;
    int mid = (l+r)/2;
    if(x == a[mid]) return mid;
    else if(x<a[mid]) return binary_search(a,l,mid-1,x);
    else return binary_search(a,mid+1,r,x);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k,x; cin>>n;
        int *a = new int [n];
        input(a,n);
        cin>>k>>x;
        int c = binary_search(a,0,n-1,x);
        int l,r;
        if(c<n && a[c]==x){
            l = c-1; r = c+1;
        }
        else{
            l=c-1, r=c;
        }
        for(int i=k/2-1;i>=0;i--){
			cout<<a[l-i]<<" ";
		}
		for(int i=0;i<k/2;i++){
			cout<<a[r+i]<<" ";
		}
        cout<<endl;
        delete []a;
    }
}