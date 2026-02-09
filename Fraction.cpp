#include<iostream>
#define ll long long
using namespace std;

struct PhanSo{
    ll a,b;
};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void nhap(PhanSo &p){
    cin>>p.a>>p.b;
}

PhanSo tong(PhanSo p, PhanSo q){
    PhanSo t;
    t.a = p.a*q.b+q.a*p.b;
    t.b = p.b*q.b;
    ll c=gcd(t.a,t.b);
    t.a/=c;
    t.b/=c;
    return t;
}

void in(PhanSo t){
    cout<<t.a<<"/"<<t.b;
}


int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
