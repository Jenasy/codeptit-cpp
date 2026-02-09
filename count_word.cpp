#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a;
        int c=0; char k=' ';
        while(k!='\n'){
            cin>>a;
            c++;
            k=getchar();
        }
        cout<<c<<endl;
    }
}