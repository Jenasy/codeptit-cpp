#include<iostream>
#include<cmath>
#define tu x
#define mau y
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b,a%b);
}

struct PhanSo{
    ll x,y;
};

void simplify(PhanSo &a){
    ll temp = gcd(a.x,a.y);
    a.x/=temp;
    a.y/=temp;
}

void process(PhanSo a, PhanSo b){
    simplify(a); simplify(b);
    PhanSo c;
    c.x = a.x*b.y+b.x*a.y;
    c.y = a.y*b.y;
    simplify(c);
    c.x = pow(c.x,2);
    c.y = pow(c.y,2);
    PhanSo d;
    d.x = a.x*b.x;
    d.y = a.y*b.y;
    simplify(d);
    d.x *= c.x;
    d.y *= c.y;
    simplify(d);
    cout<<c.x<<'/'<<c.y<<" "<<d.x<<'/'<<d.y<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}