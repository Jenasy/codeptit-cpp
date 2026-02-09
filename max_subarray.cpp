#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &v, int n, int k){
    vector<int> s;
    unsigned int a[10000000];
    for(int i=0; i<n; i++){
        if(i==0){
            cin>>a[i];
            continue;  
        } 
        cin>>a[i];
        if(a[i]>a[i-1]){
            for(int j=i-1; j>=0 && j>= i-k; j--){
                a[j]=a[i];
            }
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n,k;
        cin>>n>>k;
        input(v,n,k);
        for(int x:v) cout<<x<<" ";
        cout<<endl;
    }
}