#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Birth{
    int d,m,y;
};

struct ThiSinh{
    string ten;
    Birth ns;
    float d1,d2,d3,tong;
};

void nhap(ThiSinh &a){
    getline(cin>>ws,a.ten);
    char s;
    cin>>a.ns.d>>s>>a.ns.m>>s>>a.ns.y;
    cin>>a.d1>>a.d2>>a.d3;
    a.tong = a.d1+a.d2+a.d3;
}

void in(ThiSinh a){
    cout<<a.ten<<" ";
    cout<<setfill('0')<<setw(2)<<a.ns.d<<"/";
    cout<<setfill('0')<<setw(2)<<a.ns.m<<"/";
    cout<<a.ns.y<<" ";
    cout <<fixed<<setprecision(1)<<a.tong;
}

int main(){
    ThiSinh a;
    nhap(a);
    in(a);
    return 0;
}