#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

// Hàm tính dư của số lớn 'a' cho M (Thay thế hàm mod cũ của bạn)
ll getMod(string a, ll m) {
    ll res = 0;
    for (int i = 0; i < a.length(); i++) {
        res = (res * 10 + (a[i] - '0')) % m;
    }
    return res;
}

// Hàm nhân tránh tràn số (Thay thế hàm multi chuỗi của bạn)
ll multiply(ll a, ll b, ll m) {
    return (ll)((unsigned __int128)a * b % m);
}

// Hàm lũy thừa nhanh (Giữ nguyên logic hàm power của bạn nhưng dùng kiểu số)
ll fastPower(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b % 2 == 1) res = multiply(res, a, m);
        a = multiply(a, a, m);
        b /= 2;
    }
    return res;
}

int main() {
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        string a_str;
        ll b, m;
        cin >> a_str >> b >> m;

        // 1. Chuyển a (chuỗi) thành số dư a % m
        ll a_mod = getMod(a_str, m);

        // 2. Tính (a_mod ^ b) % m
        cout << fastPower(a_mod, b, m) << endl;
    }
    return 0;
}