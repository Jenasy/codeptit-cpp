#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<long long> arr;
    int n;
    cin>>n;
    long long a=1;
    for(int i=1; i<=n; i++){
        a*=i;
        arr.push_back(a);
    }
    long long sum=0;
    for(int i=0; i<n; i++) sum+=arr[i];
    cout<<sum;
}