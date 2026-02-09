#include<iostream>
#include<iostream>
using namespace std;

int main(){
    string a,b;
    getline(cin,a); getline(cin,b);
    int pos=a.find(b);
    a.erase(pos, b.size());
    cout<<a;
}