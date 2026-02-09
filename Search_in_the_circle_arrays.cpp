#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &v, int n, int x){
    int index = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a==x) index = i;
        v.push_back(a);
    }
    cout<<index+1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n, x;
        cin>>n>>x;
        input(v,n,x);
    }
}
