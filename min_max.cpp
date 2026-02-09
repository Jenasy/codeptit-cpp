#include<iostream>
#include<string>
using namespace std;

int c=0;

void min(string &a, int m, int s, int &k){
    if(9 * (m-a.length()) < s) return;
    if(k) return;
    if(s<0 || a.length()>m) return;
    else if(s==0 && a.length() == m){
        k=1;
        cout<<a<<" ";
    }
    for(int i=0; i<= 9; i++){
        a.push_back(i+'0');
        min(a,m,s-i,k);
        a.pop_back();
    }
}

void max(string &a, int m, int s, int &k){
    if(9 * (m-a.length())< s) return;
    if(k) return;
    if(s<0 || a.length()>m) return;
    else if(s==0 && a.length() == m){
        k=1;
        cout<<a;
    }
    for(int i=9; i >= 0; i--){
        a.push_back(i+'0');
        max(a,m,s-i,k);
        a.pop_back();
    }
}

int main(){
    int m, s;
    cin >> m >> s;
    
    // Xử lý riêng s=0 (như đã nói ở post trước)
    if (s == 0) {
        if (m == 1) cout << "0 0" << endl;
        else cout << "-1 -1" << endl;
        return 0;
    }

    string a = "", b = "";
    c = 0;
    
    // THỬ TỪNG CHỮ SỐ ĐẦU TIÊN TỪ 1 ĐẾN 9
    for(int i = 1; i <= 9; i++) {
        a.push_back(i + '0');
        min(a, m, s - i, c);
        if (c) break; // Nếu tìm thấy số nhỏ nhất rồi thì dừng
        a.pop_back(); // Nếu không tìm thấy, bỏ đi để thử số i+1
    }

    if (c == 0) {
        cout << "-1 -1" << endl;
    } else {
        c = 0;
        max(b, m, s, c);
    }
    return 0;
}