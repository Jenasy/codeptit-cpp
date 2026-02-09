#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        int arr[123]={0};
        for(int i=0; i<a.length(); i++) arr[a[i]]++;
        int max=0;
        for(int i=97; i<=122; i++) if(arr[i]>max) max = arr[i];
        if(max > (a.length()+1)/2) cout<<0<<endl;
        else cout<<1<<endl;

    }
}