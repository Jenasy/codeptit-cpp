#include<iostream>
#include<string>
#define ll long long
using namespace std;

ll tohop(ll n, ll k){
    return n*(n-1)/2;
}

int main(){
    int n; ll sum=0; cin>>n;
    cin.ignore();
    string a; cin>>a;
    for(int i=0; i<a.length(); i++){
        int k=1; int j=i+1;
        while(a[i]==a[j] && j<a.length()){
            k++;
            j++;
        }
        i=j-1;
        if(k>1) sum+=tohop(k,2); 
    }
    cout<<sum<<endl;
}