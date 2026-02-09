#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, min = 1e6, max = 0; 
        cin>>n;
        int a[100001]={0};
        for(int i=0; i<n; i++){
            int b; cin>>b;
            if(b>max) max=b;
            if(b<min) min=b;
            a[b]++;
        }
        int c=0;
        for(int i=min; i<=max; i++){
            if(!a[i]) c++;
        }
        cout<<c<<endl;
    }
}