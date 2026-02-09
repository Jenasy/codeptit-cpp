#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> v;
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        v.insert(a);
    }
    for(int x:v) cout<<x<<" ";
}