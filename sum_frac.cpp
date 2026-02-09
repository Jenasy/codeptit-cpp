#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float n;
    cin>>n;
    double a=0;
    for(int i=1; i<=n; i++) a+=1.0/i;
    cout<<fixed<<setprecision(4)<<a;
}