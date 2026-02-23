#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string result = "";
    int ch;
    bool capitalizeNext = true;

    while ((ch = getchar()) != EOF) {
        char cur = (char)ch;

        // 1. Xử lý khoảng trắng thừa
        if (cur == ' ') {
            // Nếu xâu đang rỗng hoặc ký tự trước đó là khoảng trắng/xuống dòng thì bỏ qua
            if (result.empty() || result.back() == ' ' || result.back() == '\n') {
                continue;
            }
        }

        // 2. Xử lý dấu câu và đổi thành xuống dòng
        if (cur == '.' || cur == '?' || cur == '!') {
            result += '\n';
            capitalizeNext = true;
            continue;
        }

        // 3. Viết hoa đầu câu
        if (capitalizeNext && isalpha(cur)) {
            cur = toupper(cur);
            capitalizeNext = false;
            result += cur;
        }
        else result += tolower(cur);
    }

    cout << result << endl;
    return 0;
}