#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int res = 0;
    for (int i = 0; i < max(s.length(),t.length());i++) {
        if (i >= min(s.length(),t.length())){
                res = i + 1;
                break;
        }
        if (s[i] != t[i]) {
            res = i + 1;
            break;
        }
     }
     cout << res;
}
