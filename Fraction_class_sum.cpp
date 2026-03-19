#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b,a%b);
}

class PhanSo{
    private:
        ll numerator, denominator;
    public:
        PhanSo(ll numerator, ll denominator): numerator(numerator), denominator(denominator){}
        friend istream& operator >>(istream &in, PhanSo &a);
        friend ostream& operator <<(ostream &in, PhanSo a);
        friend ll gcd(ll a, ll b);
        friend PhanSo operator + (PhanSo a, PhanSo b);
        void simplify();
};

void PhanSo::simplify(){
    ll tmp = gcd(numerator,denominator);
    numerator/=tmp;
    denominator/=tmp;
}

istream& operator >> (istream &in, PhanSo &a){
    in>>a.numerator>>a.denominator;
    return in;
}

ostream& operator << (ostream &out, PhanSo a){
    out<<a.numerator<<"/"<<a.denominator;
    return out;
}

PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo c(a.numerator*b.denominator+b.numerator*a.denominator,a.denominator*b.denominator);
    c.simplify();
    return c;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
