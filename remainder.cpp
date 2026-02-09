#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int b,p; cin>>b>>p;
        if(p==1) cout<<b<<endl;
        else{
            vector<int> v;
            for(int i=1; i<=p; i++){
                if(1LL*i*i%p==1) v.push_back(i);
            }
            long long sum=0;
            for(int x:v) if(x<=b) sum+=1+((b-x)/p);
            cout<<sum<<endl;
        }
    }
}