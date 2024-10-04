#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 2;i++){
        if (s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') ans++;
    }
    while (q--) {
        int x ;
        char c;
        cin >> x >> c;
        if (c == s[x-1]) {
            cout << ans << '\n';
            continue;
        }
        if (s[x-1] == 'A' && x <= n - 2 && s[x] == 'B' && s[x + 1] == 'C') ans--;
        if (s[x-1] == 'B' && x <= n - 1 && x > 1 && s[x-2] == 'A' && s[x] == 'C') ans--;
        if (s[x-1] == 'C' && x <= n && x > 2 && s[x-2] == 'B' && s[x-3] == 'A') ans--;
        s[x-1] = c;
        if (c == 'A' && x <= n - 2 && s[x] == 'B' && s[x+1] == 'C') ans++;
        if (c == 'B' && x <= n - 1 && x > 1 && s[x-2] == 'A' && s[x] == 'C') ans++;
        if (c == 'C' && x <= n && x > 2 && s[x-2] == 'B' && s[x-3] == 'A') ans++;
        cout << ans << '\n';
    }
}
        
        
