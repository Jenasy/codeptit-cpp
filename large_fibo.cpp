#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// Khai báo mảng toàn cục
string p[1001];

// Hàm cộng chuỗi chuẩn
string sum(string a, string b) {
    string res = "";
    int i = a.length() - 1, j = b.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int n1 = (i >= 0) ? a[i--] - '0' : 0;
        int n2 = (j >= 0) ? b[j--] - '0' : 0;
        int s = n1 + n2 + carry;
        carry = s / 10;
        res.push_back((s % 10) + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

// Tính toán trước tất cả giá trị
void solve() {
    p[0] = "0";
    p[1] = "1";
    for (int i = 2; i <= 1000; i++) {
        p[i] = sum(p[i - 1], p[i - 2]);
    }
}

int main() {
    // Tăng tốc độ nhập xuất (rất quan trọng)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve(); // Gọi tính toán 1 lần duy nhất

    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        cout << p[n] << "\n";
    }
    return 0;
}