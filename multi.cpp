#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int min = 1e9, max = -1e9, n, m;
        int *p = new int (0);
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>*p;
            if(*p>max) max=*p;
        }
        for(int i=0; i<m; i++){
            cin>>*p;
            if(*p<min) min=*p;
        }
        delete p;
        cout<<1LL*max*min<<endl;
    }
}