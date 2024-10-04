#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '.') continue;
        res += s[i];
    }
    cout << res;
}
