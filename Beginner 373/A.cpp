#include <iostream>
using namespace std;
int main() {
    string s;
    int cnt = 0;
    for (int i = 0; i < 12; i++) {
        cin >> s;
        if (s.length() == i + 1) cnt++;
    }
    cout << cnt;
}
