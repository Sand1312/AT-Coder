#include <iostream>
#include <math.h>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int index[26]{};
    for (int i = 0; i < 26; i++) {
        index[s[i] - 'A'] = i;
    }
    int ans = 0;
    for (int i=1; i < 26; i++) {
        ans += abs(index[i] - index[i-1]);
    }
    cout << ans;

}
