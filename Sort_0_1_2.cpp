#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, a[3]={0};
        cin>>n;
        for(int i=0; i<n; i++){
            int b; cin>>b;
            a[b]++;
        }
        for(int i=0; i<3; i++){
            while(a[i]!=0){
                cout<<i<<" ";
                a[i]--;
            }
        }
        cout<<endl;
    }
}