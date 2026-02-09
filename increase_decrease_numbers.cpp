#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int make_n(int a[], int n){
    int s=0;
    for(int i=0; i<n; i++){
        s+=a[i]*pow(10,n-i-1);
    }
    return s;
}

int check_decrease(int n){
    int a[9], c=0;
    for(int i=0; i<n; i++){
        a[i]=n-i-1;
    }
    while(a[n-1]<=10-n){
        while(a[0]<10){
            if(prime(make_n(a,n))) c++; ;
            a[0]++;
        }
        for(int i=0; i<n-1; i++){
            if(a[i]==10-i && a[i+1]!=10-i){
                a[i+1]++;
                for(int j=i; j>=0; j--){
                    a[j]=a[j+1]+1;
                }
            }
        }
    }
    return c;
}

int check_increase(int n){
    int a[9], c=0;
    for(int i=0; i<n ; i++){
        a[i]=i+1;
    }
    while(a[0]<=10-n){
        while(a[n-1]<10){
            if(prime(make_n(a,n))) c++; 
            a[n-1]++;
        }
        for(int i=n-1; i>0; i--){
            if(a[i]==10-n+i+1 && a[i-1]!=10-n+i+1){
                a[i-1]++;
                for(int j=i; j<n; j++){
                    a[j]=a[j-1]+1;
                }
            }
        }
    }
    return c;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<check_decrease(n)+check_increase(n)<<endl;
    }
}