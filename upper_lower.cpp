#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        char a;
        cin>>a;
        if(97<=a&&a<=122) a-=32;
        else a+=32;
        cout<<a<<endl;
    }
}