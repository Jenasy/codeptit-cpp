#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, k, c=0; cin>>n>>k;
        int *p;
        p = new int [n];
        for(int i=0; i<n; i++){
            cin>>*(p+i);
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(*(p+i)+*(p+j)==k) c++;
            }
        }
        cout<<c<<endl;
        delete[] p;
    }
}