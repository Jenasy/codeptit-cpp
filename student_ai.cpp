#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Với N = 1000, O(N^2) vẫn chạy tốt (1000^2 = 1,000,000)
    // Cách này an toàn hơn Two-pointer nếu mảng có các số trùng nhau đặc biệt
    long long min_sum = 2e18; // Khởi tạo rất lớn
    int result = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_sum = a[i] + a[j];
            if (abs(current_sum) < abs(min_sum)) {
                min_sum = current_sum;
                result = current_sum;
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}