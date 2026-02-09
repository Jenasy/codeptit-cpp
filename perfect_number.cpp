#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n, sum=1;
        cin>>n;
        for(long long i=2; i*i<=n; i++){
            if(n%i==0){
                if(i*i<n) sum= sum + i + n/i;
                else sum+=i;
            }
        }
        cout<<((n==sum)?1:0)<<endl;
    }
}