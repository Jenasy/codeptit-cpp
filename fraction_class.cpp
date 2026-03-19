#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b);

class PhanSo{
    private:
        ll numerator, denominator;
    public:
        PhanSo(ll a, ll b) : numerator(a), denominator(b){}
        friend ll gcd(ll a, ll b);
        void rutgon();
        friend istream& operator >> (istream& in, PhanSo &a);
        friend ostream& operator << (ostream& out, PhanSo &a);
};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void PhanSo::rutgon(){
    ll tmp = gcd(numerator,denominator);
    numerator /= tmp;
    denominator /=tmp;
}

istream& operator >> (istream& in, PhanSo &a){
        in>>a.numerator>>a.denominator;
        return in;
}

ostream& operator << (ostream& out, PhanSo &a){
    out<<a.numerator<<"/"<<a.denominator;
    return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}