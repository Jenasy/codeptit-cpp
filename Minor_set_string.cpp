#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        set<string> s,q;
        char k=' ';
        while(k!='\n'){
            string a; cin>>a;
            s.insert(a);
            k=getchar();
        }
        k=' ';
        while(k!='\n'){
            string a; cin>>a;
            q.insert(a);
            k=getchar();
        }
        for(string a:s){
            if(q.find(a) == q.end()) cout<<a<<" ";
        }
        cout<<endl;
    }
}