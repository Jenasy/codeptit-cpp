#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, p, count=0; cin>>n>>p;
        for(int i=2; i<=n; i++){
            if(!(i%p)){
                int c=0, k=i;
                while(!(k%p)){
                    c++;
                    k/=p;
                }
                count+=c;
            }
        }
        cout<<count<<endl;
    }
}