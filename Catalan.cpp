#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const long long BASE = 1000000000;

struct BigInt {
    vector<long long> a; // lưu chữ số ngược

    // Declaration
    BigInt(long long x = 0){
        if(x == 0) a.push_back(0);
        while(x){
            a.push_back(x % BASE);
            x /= BASE;
        }
    }

    // Delete '0' in begin
    void trim(){
        while(a.size() > 1 && a.back() == 0) a.pop_back();
    }

    // Multi a with x
    void mul(long long x){
        long long carry = 0; // temp value;
        // a is reversal number -> multi first char of a <=> multi last char in final number
        for(long long &d : a){
            __int128 cur = (__int128)d * x + carry; //_int128 use as temp to calculate big number (2^127 ~ 10^38) - DON'T use cout with it!
            d = cur % BASE;
            carry = cur / BASE;
        }
        while(carry){
            a.push_back(carry % BASE);
            carry /= BASE;
        }
    }

    //Divide a to x
    void div(long long x){
        long long rem = 0;
        for(int i = a.size()-1; i >= 0; i--){
            __int128 cur = (__int128)rem * BASE + a[i];
            a[i] = cur / x;
            rem = cur % x;
        }
        trim();
    }

    void print(){
        cout << a.back(); //return last value
        for(int i = a.size()-2; i >= 0; i--)
            cout << setw(9) << setfill('0') << a[i]; //another block need exacly 9 chars
    }   
};

int main(){
    int n;
    cin >> n;

    BigInt C(1); // C0 = 1

    for(int i = 0; i <= n; i++){
        C.mul(4*i + 2);
        C.div(i + 2);
    }

    C.print(); // đây chính là C_{n+1}
}