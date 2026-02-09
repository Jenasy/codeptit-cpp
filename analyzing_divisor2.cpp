#include<iostream>
#define MAX 31622
using namespace std;

void sieve(int a[]){
    fill(a,a+MAX,0);
    for(int i=2; i*i<MAX; i++){
        if(!a[i]) {
            for(int j=i*i; j<MAX; j+=i){
                if(!a[j]) a[j]=i;
            }
        }
    }
}

void output(int n){
    for(int i=2;i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            int c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            cout<<c<<endl;
        }
    }
    if(n!=1) cout<<n<<" "<<1;
}

int main(){
    int n; cin>>n;
    output(n);
}
