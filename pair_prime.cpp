#include<iostream>
#include<vector>
#define MAX 10001
using namespace std;

bool prime[MAX];
vector<int> v;

void sieve(){
    fill(prime,prime+MAX,true);
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=MAX; i++){
        if(prime[i]) {
            for(int j=i*i; j<MAX; j+=i){
                if(prime[j]) prime[j]=false;
            }
        }
    }
    for(int i=2; i<MAX; i++) if(prime[i]) v.push_back(i);
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<v.size(); i++){
            int c=-1;
            for(int j=v.size()-1; j>=i; j--){
                if(n-v[i] == v[j]){
                    c=j;
                    break;
                }
            }
            if(c!=-1) {
                cout<<v[i]<<" "<<v[c]<<endl;
                break;
            }
            else cout<<endl;
        }
    }
}